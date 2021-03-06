/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SystemInformationChangeIndication_H_
#define	_SystemInformationChangeIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BCCH-ModificationInfo.h"
#include <BIT_STRING.h>
#include "SystemInformationChangeIndication-v860ext-IEs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SystemInformationChangeIndication */
typedef struct SystemInformationChangeIndication {
	BCCH_ModificationInfo_t	 bcch_ModificationInfo;
	struct SystemInformationChangeIndication__laterNonCriticalExtensions {
		BIT_STRING_t	*systemInformationChangeIndication_r3_add_ext	/* OPTIONAL */;
		struct SystemInformationChangeIndication__laterNonCriticalExtensions__v860NonCriticalExtensions {
			SystemInformationChangeIndication_v860ext_IEs_t	 systemInformationChangeIndication_v860ext;
			struct SystemInformationChangeIndication__laterNonCriticalExtensions__v860NonCriticalExtensions__nonCriticalExtensions {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *nonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *v860NonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *laterNonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationChangeIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationChangeIndication;

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationChangeIndication_H_ */
#include <asn_internal.h>
