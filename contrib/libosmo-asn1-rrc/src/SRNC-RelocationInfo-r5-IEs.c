/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../asn/Internode-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "SRNC-RelocationInfo-r5-IEs.h"

static asn_per_constraints_t asn_PER_type_dummy_constr_30 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_fdd_31[] = {
	{ ATF_POINTER, 2, offsetof(struct SRNC_RelocationInfo_r5_IEs__dummy__fdd, dummy1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CPCH_SetID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy1"
		},
	{ ATF_POINTER, 1, offsetof(struct SRNC_RelocationInfo_r5_IEs__dummy__fdd, dummy2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRAC_StaticInformationList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy2"
		},
};
static int asn_MAP_fdd_oms_31[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_fdd_tags_31[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_31[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dummy1 at 880 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dummy2 at 881 */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_31 = {
	sizeof(struct SRNC_RelocationInfo_r5_IEs__dummy__fdd),
	offsetof(struct SRNC_RelocationInfo_r5_IEs__dummy__fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_31,
	2,	/* Count of tags in the map */
	asn_MAP_fdd_oms_31,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_31 = {
	"fdd",
	"fdd",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_fdd_tags_31,
	sizeof(asn_DEF_fdd_tags_31)
		/sizeof(asn_DEF_fdd_tags_31[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_31,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_31)
		/sizeof(asn_DEF_fdd_tags_31[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fdd_31,
	2,	/* Elements count */
	&asn_SPC_fdd_specs_31	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_dummy_30[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SRNC_RelocationInfo_r5_IEs__dummy, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_31,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRNC_RelocationInfo_r5_IEs__dummy, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
};
static asn_TYPE_tag2member_t asn_MAP_dummy_tag2el_30[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd at 880 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd at 883 */
};
static asn_CHOICE_specifics_t asn_SPC_dummy_specs_30 = {
	sizeof(struct SRNC_RelocationInfo_r5_IEs__dummy),
	offsetof(struct SRNC_RelocationInfo_r5_IEs__dummy, _asn_ctx),
	offsetof(struct SRNC_RelocationInfo_r5_IEs__dummy, present),
	sizeof(((struct SRNC_RelocationInfo_r5_IEs__dummy *)0)->present),
	asn_MAP_dummy_tag2el_30,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dummy_30 = {
	"dummy",
	"dummy",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_dummy_constr_30,
	asn_MBR_dummy_30,
	2,	/* Elements count */
	&asn_SPC_dummy_specs_30	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SRNC_RelocationInfo_r5_IEs_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SRNC_RelocationInfo_r5_IEs, rb_IdentityForHOMessage),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RB_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rb-IdentityForHOMessage"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRNC_RelocationInfo_r5_IEs, stateOfRRC),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_StateOfRRC,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"stateOfRRC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRNC_RelocationInfo_r5_IEs, stateOfRRC_Procedure),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_StateOfRRC_Procedure,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"stateOfRRC-Procedure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRNC_RelocationInfo_r5_IEs, cipheringStatusList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CipheringStatusList_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cipheringStatusList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRNC_RelocationInfo_r5_IEs, latestConfiguredCN_Domain),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CN_DomainIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"latestConfiguredCN-Domain"
		},
	{ ATF_POINTER, 3, offsetof(struct SRNC_RelocationInfo_r5_IEs, calculationTimeForCiphering),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CalculationTimeForCiphering,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"calculationTimeForCiphering"
		},
	{ ATF_POINTER, 2, offsetof(struct SRNC_RelocationInfo_r5_IEs, count_C_List),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_COUNT_C_List,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"count-C-List"
		},
	{ ATF_POINTER, 1, offsetof(struct SRNC_RelocationInfo_r5_IEs, cipheringInfoPerRB_List),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CipheringInfoPerRB_List_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cipheringInfoPerRB-List"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRNC_RelocationInfo_r5_IEs, integrityProtectionStatus),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntegrityProtectionStatus,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"integrityProtectionStatus"
		},
	{ ATF_POINTER, 2, offsetof(struct SRNC_RelocationInfo_r5_IEs, srb_SpecificIntegrityProtInfo),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRB_SpecificIntegrityProtInfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"srb-SpecificIntegrityProtInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct SRNC_RelocationInfo_r5_IEs, implementationSpecificParams),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ImplementationSpecificParams,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"implementationSpecificParams"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRNC_RelocationInfo_r5_IEs, u_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_U_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"u-RNTI"
		},
	{ ATF_POINTER, 1, offsetof(struct SRNC_RelocationInfo_r5_IEs, c_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_C_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"c-RNTI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRNC_RelocationInfo_r5_IEs, ue_RadioAccessCapability),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_RadioAccessCapability_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-RadioAccessCapability"
		},
	{ ATF_POINTER, 6, offsetof(struct SRNC_RelocationInfo_r5_IEs, ue_RadioAccessCapability_ext),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_RadioAccessCapabBandFDDList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-RadioAccessCapability-ext"
		},
	{ ATF_POINTER, 5, offsetof(struct SRNC_RelocationInfo_r5_IEs, ue_Positioning_LastKnownPos),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_LastKnownPos,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-Positioning-LastKnownPos"
		},
	{ ATF_POINTER, 4, offsetof(struct SRNC_RelocationInfo_r5_IEs, uESpecificBehaviourInformation1idle),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UESpecificBehaviourInformation1idle,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uESpecificBehaviourInformation1idle"
		},
	{ ATF_POINTER, 3, offsetof(struct SRNC_RelocationInfo_r5_IEs, uESpecificBehaviourInformation1interRAT),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UESpecificBehaviourInformation1interRAT,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uESpecificBehaviourInformation1interRAT"
		},
	{ ATF_POINTER, 2, offsetof(struct SRNC_RelocationInfo_r5_IEs, ue_RATSpecificCapability),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterRAT_UE_RadioAccessCapabilityList_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-RATSpecificCapability"
		},
	{ ATF_POINTER, 1, offsetof(struct SRNC_RelocationInfo_r5_IEs, ura_Identity),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_URA_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ura-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRNC_RelocationInfo_r5_IEs, cn_CommonGSM_MAP_NAS_SysInfo),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NAS_SystemInformationGSM_MAP,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-CommonGSM-MAP-NAS-SysInfo"
		},
	{ ATF_POINTER, 2, offsetof(struct SRNC_RelocationInfo_r5_IEs, cn_DomainInformationList),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CN_DomainInformationListFull,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-DomainInformationList"
		},
	{ ATF_POINTER, 1, offsetof(struct SRNC_RelocationInfo_r5_IEs, ongoingMeasRepList),
		(ASN_TAG_CLASS_CONTEXT | (22 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OngoingMeasRepList_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ongoingMeasRepList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRNC_RelocationInfo_r5_IEs, predefinedConfigStatusList),
		(ASN_TAG_CLASS_CONTEXT | (23 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PredefinedConfigStatusList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"predefinedConfigStatusList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRNC_RelocationInfo_r5_IEs, srb_InformationList),
		(ASN_TAG_CLASS_CONTEXT | (24 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRB_InformationSetupList_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"srb-InformationList"
		},
	{ ATF_POINTER, 9, offsetof(struct SRNC_RelocationInfo_r5_IEs, rab_InformationList),
		(ASN_TAG_CLASS_CONTEXT | (25 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RAB_InformationSetupList_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rab-InformationList"
		},
	{ ATF_POINTER, 8, offsetof(struct SRNC_RelocationInfo_r5_IEs, ul_CommonTransChInfo),
		(ASN_TAG_CLASS_CONTEXT | (26 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_CommonTransChInfo_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-CommonTransChInfo"
		},
	{ ATF_POINTER, 7, offsetof(struct SRNC_RelocationInfo_r5_IEs, ul_TransChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (27 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_AddReconfTransChInfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-TransChInfoList"
		},
	{ ATF_POINTER, 6, offsetof(struct SRNC_RelocationInfo_r5_IEs, dummy),
		(ASN_TAG_CLASS_CONTEXT | (28 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_dummy_30,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy"
		},
	{ ATF_POINTER, 5, offsetof(struct SRNC_RelocationInfo_r5_IEs, dl_CommonTransChInfo),
		(ASN_TAG_CLASS_CONTEXT | (29 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CommonTransChInfo_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CommonTransChInfo"
		},
	{ ATF_POINTER, 4, offsetof(struct SRNC_RelocationInfo_r5_IEs, dl_TransChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (30 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_AddReconfTransChInfoList_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-TransChInfoList"
		},
	{ ATF_POINTER, 3, offsetof(struct SRNC_RelocationInfo_r5_IEs, tpc_CombinationInfoList),
		(ASN_TAG_CLASS_CONTEXT | (31 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TPC_CombinationInfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tpc-CombinationInfoList"
		},
	{ ATF_POINTER, 2, offsetof(struct SRNC_RelocationInfo_r5_IEs, measurementReport),
		(ASN_TAG_CLASS_CONTEXT | (32 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementReport,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measurementReport"
		},
	{ ATF_POINTER, 1, offsetof(struct SRNC_RelocationInfo_r5_IEs, failureCause),
		(ASN_TAG_CLASS_CONTEXT | (33 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_FailureCauseWithProtErr,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"failureCause"
		},
};
static int asn_MAP_SRNC_RelocationInfo_r5_IEs_oms_1[] = { 0, 5, 6, 7, 9, 10, 12, 14, 15, 16, 17, 18, 19, 21, 22, 25, 26, 27, 28, 29, 30, 31, 32, 33 };
static ber_tlv_tag_t asn_DEF_SRNC_RelocationInfo_r5_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SRNC_RelocationInfo_r5_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rb-IdentityForHOMessage at 837 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* stateOfRRC at 838 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* stateOfRRC-Procedure at 839 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cipheringStatusList at 841 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* latestConfiguredCN-Domain at 842 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* calculationTimeForCiphering at 843 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* count-C-List at 844 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* cipheringInfoPerRB-List at 845 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* integrityProtectionStatus at 847 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* srb-SpecificIntegrityProtInfo at 848 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* implementationSpecificParams at 849 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* u-RNTI at 851 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* c-RNTI at 852 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* ue-RadioAccessCapability at 853 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* ue-RadioAccessCapability-ext at 854 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* ue-Positioning-LastKnownPos at 855 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* uESpecificBehaviourInformation1idle at 857 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* uESpecificBehaviourInformation1interRAT at 859 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* ue-RATSpecificCapability at 861 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* ura-Identity at 863 */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* cn-CommonGSM-MAP-NAS-SysInfo at 865 */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 }, /* cn-DomainInformationList at 866 */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 22, 0, 0 }, /* ongoingMeasRepList at 868 */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 23, 0, 0 }, /* predefinedConfigStatusList at 870 */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 24, 0, 0 }, /* srb-InformationList at 871 */
    { (ASN_TAG_CLASS_CONTEXT | (25 << 2)), 25, 0, 0 }, /* rab-InformationList at 872 */
    { (ASN_TAG_CLASS_CONTEXT | (26 << 2)), 26, 0, 0 }, /* ul-CommonTransChInfo at 874 */
    { (ASN_TAG_CLASS_CONTEXT | (27 << 2)), 27, 0, 0 }, /* ul-TransChInfoList at 875 */
    { (ASN_TAG_CLASS_CONTEXT | (28 << 2)), 28, 0, 0 }, /* dummy at 882 */
    { (ASN_TAG_CLASS_CONTEXT | (29 << 2)), 29, 0, 0 }, /* dl-CommonTransChInfo at 885 */
    { (ASN_TAG_CLASS_CONTEXT | (30 << 2)), 30, 0, 0 }, /* dl-TransChInfoList at 886 */
    { (ASN_TAG_CLASS_CONTEXT | (31 << 2)), 31, 0, 0 }, /* tpc-CombinationInfoList at 888 */
    { (ASN_TAG_CLASS_CONTEXT | (32 << 2)), 32, 0, 0 }, /* measurementReport at 890 */
    { (ASN_TAG_CLASS_CONTEXT | (33 << 2)), 33, 0, 0 } /* failureCause at 892 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SRNC_RelocationInfo_r5_IEs_specs_1 = {
	sizeof(struct SRNC_RelocationInfo_r5_IEs),
	offsetof(struct SRNC_RelocationInfo_r5_IEs, _asn_ctx),
	asn_MAP_SRNC_RelocationInfo_r5_IEs_tag2el_1,
	34,	/* Count of tags in the map */
	asn_MAP_SRNC_RelocationInfo_r5_IEs_oms_1,	/* Optional members */
	24, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SRNC_RelocationInfo_r5_IEs = {
	"SRNC-RelocationInfo-r5-IEs",
	"SRNC-RelocationInfo-r5-IEs",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SRNC_RelocationInfo_r5_IEs_tags_1,
	sizeof(asn_DEF_SRNC_RelocationInfo_r5_IEs_tags_1)
		/sizeof(asn_DEF_SRNC_RelocationInfo_r5_IEs_tags_1[0]), /* 1 */
	asn_DEF_SRNC_RelocationInfo_r5_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SRNC_RelocationInfo_r5_IEs_tags_1)
		/sizeof(asn_DEF_SRNC_RelocationInfo_r5_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SRNC_RelocationInfo_r5_IEs_1,
	34,	/* Elements count */
	&asn_SPC_SRNC_RelocationInfo_r5_IEs_specs_1	/* Additional specs */
};
