/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_CBS_DRX_Level1Information_extension_r6_H_
#define	_CBS_DRX_Level1Information_extension_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CBS_DRX_Level1Information_extension_r6 {
	CBS_DRX_Level1Information_extension_r6_p8	= 0,
	CBS_DRX_Level1Information_extension_r6_p16	= 1,
	CBS_DRX_Level1Information_extension_r6_p32	= 2,
	CBS_DRX_Level1Information_extension_r6_p64	= 3,
	CBS_DRX_Level1Information_extension_r6_p128	= 4,
	CBS_DRX_Level1Information_extension_r6_p256	= 5
} e_CBS_DRX_Level1Information_extension_r6;

/* CBS-DRX-Level1Information-extension-r6 */
typedef long	 CBS_DRX_Level1Information_extension_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CBS_DRX_Level1Information_extension_r6;
asn_struct_free_f CBS_DRX_Level1Information_extension_r6_free;
asn_struct_print_f CBS_DRX_Level1Information_extension_r6_print;
asn_constr_check_f CBS_DRX_Level1Information_extension_r6_constraint;
ber_type_decoder_f CBS_DRX_Level1Information_extension_r6_decode_ber;
der_type_encoder_f CBS_DRX_Level1Information_extension_r6_encode_der;
xer_type_decoder_f CBS_DRX_Level1Information_extension_r6_decode_xer;
xer_type_encoder_f CBS_DRX_Level1Information_extension_r6_encode_xer;
per_type_decoder_f CBS_DRX_Level1Information_extension_r6_decode_uper;
per_type_encoder_f CBS_DRX_Level1Information_extension_r6_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CBS_DRX_Level1Information_extension_r6_H_ */
#include <asn_internal.h>
