/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_PenaltyTime_RSCP_H_
#define	_PenaltyTime_RSCP_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "TemporaryOffset1.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PenaltyTime_RSCP_PR {
	PenaltyTime_RSCP_PR_NOTHING,	/* No components present */
	PenaltyTime_RSCP_PR_notUsed,
	PenaltyTime_RSCP_PR_pt10,
	PenaltyTime_RSCP_PR_pt20,
	PenaltyTime_RSCP_PR_pt30,
	PenaltyTime_RSCP_PR_pt40,
	PenaltyTime_RSCP_PR_pt50,
	PenaltyTime_RSCP_PR_pt60
} PenaltyTime_RSCP_PR;

/* PenaltyTime-RSCP */
typedef struct PenaltyTime_RSCP {
	PenaltyTime_RSCP_PR present;
	union PenaltyTime_RSCP_u {
		NULL_t	 notUsed;
		TemporaryOffset1_t	 pt10;
		TemporaryOffset1_t	 pt20;
		TemporaryOffset1_t	 pt30;
		TemporaryOffset1_t	 pt40;
		TemporaryOffset1_t	 pt50;
		TemporaryOffset1_t	 pt60;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PenaltyTime_RSCP_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PenaltyTime_RSCP;

#ifdef __cplusplus
}
#endif

#endif	/* _PenaltyTime_RSCP_H_ */
#include <asn_internal.h>