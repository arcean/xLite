/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_RRCConnectionReject_vb50ext_IEs_H_
#define	_RRCConnectionReject_vb50ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EUTRA_TargetFreqInfoList_vb50ext;

/* RRCConnectionReject-vb50ext-IEs */
typedef struct RRCConnectionReject_vb50ext_IEs {
	struct EUTRA_TargetFreqInfoList_vb50ext	*eutra_TargetFreqInfoList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReject_vb50ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReject_vb50ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EUTRA-TargetFreqInfoList-vb50ext.h"

#endif	/* _RRCConnectionReject_vb50ext_IEs_H_ */
#include <asn_internal.h>
