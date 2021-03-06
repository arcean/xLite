package zz.snsn.xlite.views.adapter;

import java.io.IOException;
import java.sql.Timestamp;
import java.text.DateFormat;
import java.util.Locale;
import java.util.Vector;

import android.content.Context;
import android.content.DialogInterface;
import android.content.DialogInterface.OnClickListener;
import android.database.SQLException;
import android.support.v4.content.ContextCompat;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.TextView;
import android.widget.Toast;

import zz.snsn.xlite.EncryptedFileWriterError;
import zz.snsn.xlite.R;
import zz.snsn.xlite.DetailChartActivity;
import zz.snsn.xlite.analysis.ImsiCatcher;
import zz.snsn.xlite.util.MsdDialog;

public class ListViewImsiCatcherAdapter extends ArrayAdapter<ImsiCatcher> {

    private static final String TAG = "SNSN";
    private static final String mTAG = "ListViewImsiCatcherAdapter: ";

	// Attributes
	private final Context context;
	private final Vector<ImsiCatcher> values;
	private DetailChartActivity host;

	public ListViewImsiCatcherAdapter(Context context, Vector<ImsiCatcher> values) {
		super(context, R.layout.custom_row_layout_sms, values);
		this.context = context;
		this.values = values;
		this.host = (DetailChartActivity) context;
	}

	private String addScore(String text, String scoreName, double score) {
		if (score > 0.0) {
			String scoreText = String.format(Locale.US, "%.1f", score);
			return text + ", " + scoreName + "=" + scoreText;
		}
		return text;
	}
	
	@Override
	public View getView(final int position, View convertView, ViewGroup parent) {

        // Do we need a ViewHolder to recycle and check for refresh conditions?
        // (This is a lint performance issue.)
		LayoutInflater inflater = (LayoutInflater) context.getSystemService(Context.LAYOUT_INFLATER_SERVICE);
		final View rowView = inflater.inflate(R.layout.custom_row_layout_imsicatcher, parent, false);
		
		// Set score
		ImsiCatcher catcher = values.get(position);
		String scoreText = String.format(Locale.US, "%.2f", catcher.getScore());
		scoreText = addScore(scoreText, "a1", catcher.getA1());
		scoreText = addScore(scoreText, "a2", catcher.getA2());
		scoreText = addScore(scoreText, "a4", catcher.getA4());
		scoreText = addScore(scoreText, "a5", catcher.getA5());
		scoreText = addScore(scoreText, "k1", catcher.getK1());
		scoreText = addScore(scoreText, "k2", catcher.getK2());
		scoreText = addScore(scoreText, "c1", catcher.getC1());
		scoreText = addScore(scoreText, "c2", catcher.getC2());
		scoreText = addScore(scoreText, "c3", catcher.getC3());
		scoreText = addScore(scoreText, "c4", catcher.getC4());
		scoreText = addScore(scoreText, "c5", catcher.getC5());
		scoreText = addScore(scoreText, "t1", catcher.getT1());
		scoreText = addScore(scoreText, "t3", catcher.getT3());
		scoreText = addScore(scoreText, "t4", catcher.getT4());
		scoreText = addScore(scoreText, "r1", catcher.getR1());
		scoreText = addScore(scoreText, "r2", catcher.getR2());
		scoreText = addScore(scoreText, "f1", catcher.getF1());
		((TextView) rowView.findViewById(R.id.txtImsiRowScoreValue)).setText(scoreText);

		// Set time
		Timestamp stamp = new Timestamp(values.get(position).getStartTime());
		((TextView) rowView.findViewById(R.id.txtImsiRowTimeValue)).setText(DateFormat.getDateTimeInstance().format(stamp.getTime()));

		// Set position
		((TextView) rowView.findViewById(R.id.txtImsiRowPositionValue)).setText(values.get(position).getLocation());

		// Set cell id
		((TextView) rowView.findViewById(R.id.txtImsiRowCellIdValue)).setText(String.valueOf(values.get(position).getFullCellID()));
		
		// Check upload state and set button
		final Button btnUpload = (Button) rowView.findViewById(R.id.btnUploadImsi);
		
		switch (values.get(position).getUploadState()) {
		case STATE_UPLOADED:
			btnUpload.setBackgroundResource(R.drawable.ic_content_checkmark);
			btnUpload.setText("");
			btnUpload.setEnabled(false);
			btnUpload.setVisibility(View.VISIBLE);
			//rowView.setBackgroundColor(context.getResources().getColor(R.color.common_custom_row_background_disabled));
            rowView.setBackgroundColor(ContextCompat.getColor(context, R.color.common_custom_row_background_disabled));
			break;
		case STATE_AVAILABLE:
			btnUpload.setBackgroundResource(R.drawable.bt_content_contributedata_enable);
			btnUpload.setText(context.getResources().getString(R.string.common_button_upload));
			btnUpload.setEnabled(true);
			btnUpload.setVisibility(View.VISIBLE);
			btnUpload.setOnClickListener(new View.OnClickListener()
			{
				@Override
				public void onClick(View v)
				{
					MsdDialog.makeConfirmationDialog(host, host.getResources().getString(R.string.alert_upload_message),
							new OnClickListener()
					{
						@Override
						public void onClick(DialogInterface dialog, int which)
						{
							try {
								values.get(position).upload();
								btnUpload.setBackgroundResource(R.drawable.ic_content_checkmark);
								btnUpload.setText("");
								btnUpload.setEnabled(false);
								btnUpload.setVisibility(View.VISIBLE);
								//rowView.setBackgroundColor(context.getResources().getColor(R.color.common_custom_row_background_disabled));
                                rowView.setBackgroundColor(ContextCompat.getColor(context, R.color.common_custom_row_background_disabled));
							} catch (EncryptedFileWriterError e1) {
								// FIXME: Error dialog
                                // Emi: What kind of "dialog"? (Is this fixed?)  2017-01-11
								//Log.i(TAG, mTAG + "Upload for IMSI catcher event failed: " + e.getMessage(),e);
                                Log.i(TAG, mTAG + "Upload for IMSI catcher event failed: " + e1);
                                Toast.makeText(context, "Upload of event failed with: EncryptedFileWriterError", Toast.LENGTH_LONG).show();
							} catch (SQLException e2) {
								// FIXME: Error dialog
								Log.i(TAG, mTAG + "Upload for IMSI catcher event failed: " + e2);
                                Toast.makeText(context, "Upload of event failed with: SQLException", Toast.LENGTH_LONG).show();
							} catch (IOException e3) {
								// FIXME: Error dialog
								Log.i(TAG, mTAG + "Upload for IMSI catcher event failed: " + e3);
                                Toast.makeText(context, "Upload of event failed with: IOException", Toast.LENGTH_LONG).show();
							}
							host.refreshView();
						}
					}, null, false).show();
				}
			});
			break;
		case STATE_DELETED:
			btnUpload.setBackgroundResource(R.drawable.bt_content_contributedata_disable);
			btnUpload.setText(context.getResources().getString(R.string.common_button_nodata));
			btnUpload.setEnabled(false);
			btnUpload.setVisibility(View.VISIBLE);
			rowView.setBackgroundColor(ContextCompat.getColor(context, R.color.common_custom_row_background_disabled));
			break;
		case STATE_INVALID:
			btnUpload.setBackgroundResource(R.drawable.bt_content_contributedata_disable);
			btnUpload.setText(context.getResources().getString(R.string.common_button_nodata));
			btnUpload.setEnabled(false);
			btnUpload.setVisibility(View.VISIBLE);
			rowView.setBackgroundColor(ContextCompat.getColor(context, R.color.common_custom_row_background_disabled));
			break;
		default:
			btnUpload.setEnabled(false);
			btnUpload.setVisibility(View.GONE);
			break;
		}

		return rowView;
	 }
}
