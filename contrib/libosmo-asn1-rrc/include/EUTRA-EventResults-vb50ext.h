/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_EUTRA_EventResults_vb50ext_H_
#define	_EUTRA_EventResults_vb50ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EUTRA-EventResultList-vb50ext.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EUTRA-EventResults-vb50ext */
typedef struct EUTRA_EventResults_vb50ext {
	EUTRA_EventResultList_vb50ext_t	 eutra_EventResultsList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EUTRA_EventResults_vb50ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_EventResults_vb50ext;

#ifdef __cplusplus
}
#endif

#endif	/* _EUTRA_EventResults_vb50ext_H_ */
#include <asn_internal.h>