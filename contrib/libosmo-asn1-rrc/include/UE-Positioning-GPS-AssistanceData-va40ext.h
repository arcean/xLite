/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UE_Positioning_GPS_AssistanceData_va40ext_H_
#define	_UE_Positioning_GPS_AssistanceData_va40ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_Positioning_GPS_ReferenceTime_va40ext;
struct UE_Positioning_GPS_Almanac_va40ext;
struct UE_Positioning_GPS_AcquisitionAssistance_va40ext;

/* UE-Positioning-GPS-AssistanceData-va40ext */
typedef struct UE_Positioning_GPS_AssistanceData_va40ext {
	struct UE_Positioning_GPS_ReferenceTime_va40ext	*ue_positioning_GPS_ReferenceTime	/* OPTIONAL */;
	struct UE_Positioning_GPS_Almanac_va40ext	*ue_positioning_GPS_Almanac	/* OPTIONAL */;
	struct UE_Positioning_GPS_AcquisitionAssistance_va40ext	*ue_positioning_GPS_AcquisitionAssistance	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_GPS_AssistanceData_va40ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GPS_AssistanceData_va40ext;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-Positioning-GPS-ReferenceTime-va40ext.h"
#include "UE-Positioning-GPS-Almanac-va40ext.h"
#include "UE-Positioning-GPS-AcquisitionAssistance-va40ext.h"

#endif	/* _UE_Positioning_GPS_AssistanceData_va40ext_H_ */
#include <asn_internal.h>
