/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "CSG-ProximityIndicationCapability.h"

static int
supportOfIntraFreqProximityIndication_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
supportOfIntraFreqProximityIndication_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
supportOfIntraFreqProximityIndication_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	supportOfIntraFreqProximityIndication_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
supportOfIntraFreqProximityIndication_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	supportOfIntraFreqProximityIndication_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
supportOfIntraFreqProximityIndication_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	supportOfIntraFreqProximityIndication_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
supportOfIntraFreqProximityIndication_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	supportOfIntraFreqProximityIndication_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
supportOfIntraFreqProximityIndication_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	supportOfIntraFreqProximityIndication_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
supportOfIntraFreqProximityIndication_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	supportOfIntraFreqProximityIndication_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
supportOfIntraFreqProximityIndication_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	supportOfIntraFreqProximityIndication_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
supportOfIntraFreqProximityIndication_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	supportOfIntraFreqProximityIndication_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
supportOfInterFreqProximityIndication_4_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
supportOfInterFreqProximityIndication_4_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
supportOfInterFreqProximityIndication_4_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	supportOfInterFreqProximityIndication_4_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
supportOfInterFreqProximityIndication_4_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	supportOfInterFreqProximityIndication_4_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
supportOfInterFreqProximityIndication_4_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	supportOfInterFreqProximityIndication_4_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
supportOfInterFreqProximityIndication_4_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	supportOfInterFreqProximityIndication_4_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
supportOfInterFreqProximityIndication_4_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	supportOfInterFreqProximityIndication_4_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
supportOfInterFreqProximityIndication_4_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	supportOfInterFreqProximityIndication_4_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
supportOfInterFreqProximityIndication_4_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	supportOfInterFreqProximityIndication_4_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
supportOfInterFreqProximityIndication_4_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	supportOfInterFreqProximityIndication_4_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
supportOfE_UtraProximityIndication_6_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
supportOfE_UtraProximityIndication_6_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
supportOfE_UtraProximityIndication_6_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	supportOfE_UtraProximityIndication_6_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
supportOfE_UtraProximityIndication_6_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	supportOfE_UtraProximityIndication_6_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
supportOfE_UtraProximityIndication_6_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	supportOfE_UtraProximityIndication_6_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
supportOfE_UtraProximityIndication_6_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	supportOfE_UtraProximityIndication_6_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
supportOfE_UtraProximityIndication_6_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	supportOfE_UtraProximityIndication_6_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
supportOfE_UtraProximityIndication_6_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	supportOfE_UtraProximityIndication_6_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
supportOfE_UtraProximityIndication_6_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	supportOfE_UtraProximityIndication_6_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
supportOfE_UtraProximityIndication_6_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	supportOfE_UtraProximityIndication_6_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_supportOfIntraFreqProximityIndication_constr_2 = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_supportOfInterFreqProximityIndication_constr_4 = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_supportOfE_UtraProximityIndication_constr_6 = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_supportOfIntraFreqProximityIndication_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_supportOfIntraFreqProximityIndication_enum2value_2[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_supportOfIntraFreqProximityIndication_specs_2 = {
	asn_MAP_supportOfIntraFreqProximityIndication_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_supportOfIntraFreqProximityIndication_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_supportOfIntraFreqProximityIndication_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportOfIntraFreqProximityIndication_2 = {
	"supportOfIntraFreqProximityIndication",
	"supportOfIntraFreqProximityIndication",
	supportOfIntraFreqProximityIndication_2_free,
	supportOfIntraFreqProximityIndication_2_print,
	supportOfIntraFreqProximityIndication_2_constraint,
	supportOfIntraFreqProximityIndication_2_decode_ber,
	supportOfIntraFreqProximityIndication_2_encode_der,
	supportOfIntraFreqProximityIndication_2_decode_xer,
	supportOfIntraFreqProximityIndication_2_encode_xer,
	supportOfIntraFreqProximityIndication_2_decode_uper,
	supportOfIntraFreqProximityIndication_2_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_supportOfIntraFreqProximityIndication_tags_2,
	sizeof(asn_DEF_supportOfIntraFreqProximityIndication_tags_2)
		/sizeof(asn_DEF_supportOfIntraFreqProximityIndication_tags_2[0]) - 1, /* 1 */
	asn_DEF_supportOfIntraFreqProximityIndication_tags_2,	/* Same as above */
	sizeof(asn_DEF_supportOfIntraFreqProximityIndication_tags_2)
		/sizeof(asn_DEF_supportOfIntraFreqProximityIndication_tags_2[0]), /* 2 */
	&asn_PER_type_supportOfIntraFreqProximityIndication_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_supportOfIntraFreqProximityIndication_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_supportOfInterFreqProximityIndication_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_supportOfInterFreqProximityIndication_enum2value_4[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_supportOfInterFreqProximityIndication_specs_4 = {
	asn_MAP_supportOfInterFreqProximityIndication_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_supportOfInterFreqProximityIndication_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_supportOfInterFreqProximityIndication_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportOfInterFreqProximityIndication_4 = {
	"supportOfInterFreqProximityIndication",
	"supportOfInterFreqProximityIndication",
	supportOfInterFreqProximityIndication_4_free,
	supportOfInterFreqProximityIndication_4_print,
	supportOfInterFreqProximityIndication_4_constraint,
	supportOfInterFreqProximityIndication_4_decode_ber,
	supportOfInterFreqProximityIndication_4_encode_der,
	supportOfInterFreqProximityIndication_4_decode_xer,
	supportOfInterFreqProximityIndication_4_encode_xer,
	supportOfInterFreqProximityIndication_4_decode_uper,
	supportOfInterFreqProximityIndication_4_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_supportOfInterFreqProximityIndication_tags_4,
	sizeof(asn_DEF_supportOfInterFreqProximityIndication_tags_4)
		/sizeof(asn_DEF_supportOfInterFreqProximityIndication_tags_4[0]) - 1, /* 1 */
	asn_DEF_supportOfInterFreqProximityIndication_tags_4,	/* Same as above */
	sizeof(asn_DEF_supportOfInterFreqProximityIndication_tags_4)
		/sizeof(asn_DEF_supportOfInterFreqProximityIndication_tags_4[0]), /* 2 */
	&asn_PER_type_supportOfInterFreqProximityIndication_constr_4,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_supportOfInterFreqProximityIndication_specs_4	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_supportOfE_UtraProximityIndication_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_supportOfE_UtraProximityIndication_enum2value_6[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_supportOfE_UtraProximityIndication_specs_6 = {
	asn_MAP_supportOfE_UtraProximityIndication_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_supportOfE_UtraProximityIndication_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_supportOfE_UtraProximityIndication_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportOfE_UtraProximityIndication_6 = {
	"supportOfE-UtraProximityIndication",
	"supportOfE-UtraProximityIndication",
	supportOfE_UtraProximityIndication_6_free,
	supportOfE_UtraProximityIndication_6_print,
	supportOfE_UtraProximityIndication_6_constraint,
	supportOfE_UtraProximityIndication_6_decode_ber,
	supportOfE_UtraProximityIndication_6_encode_der,
	supportOfE_UtraProximityIndication_6_decode_xer,
	supportOfE_UtraProximityIndication_6_encode_xer,
	supportOfE_UtraProximityIndication_6_decode_uper,
	supportOfE_UtraProximityIndication_6_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_supportOfE_UtraProximityIndication_tags_6,
	sizeof(asn_DEF_supportOfE_UtraProximityIndication_tags_6)
		/sizeof(asn_DEF_supportOfE_UtraProximityIndication_tags_6[0]) - 1, /* 1 */
	asn_DEF_supportOfE_UtraProximityIndication_tags_6,	/* Same as above */
	sizeof(asn_DEF_supportOfE_UtraProximityIndication_tags_6)
		/sizeof(asn_DEF_supportOfE_UtraProximityIndication_tags_6[0]), /* 2 */
	&asn_PER_type_supportOfE_UtraProximityIndication_constr_6,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_supportOfE_UtraProximityIndication_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CSG_ProximityIndicationCapability_1[] = {
	{ ATF_POINTER, 3, offsetof(struct CSG_ProximityIndicationCapability, supportOfIntraFreqProximityIndication),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_supportOfIntraFreqProximityIndication_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportOfIntraFreqProximityIndication"
		},
	{ ATF_POINTER, 2, offsetof(struct CSG_ProximityIndicationCapability, supportOfInterFreqProximityIndication),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_supportOfInterFreqProximityIndication_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportOfInterFreqProximityIndication"
		},
	{ ATF_POINTER, 1, offsetof(struct CSG_ProximityIndicationCapability, supportOfE_UtraProximityIndication),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_supportOfE_UtraProximityIndication_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportOfE-UtraProximityIndication"
		},
};
static int asn_MAP_CSG_ProximityIndicationCapability_oms_1[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_CSG_ProximityIndicationCapability_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CSG_ProximityIndicationCapability_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supportOfIntraFreqProximityIndication at 989 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* supportOfInterFreqProximityIndication at 990 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* supportOfE-UtraProximityIndication at 991 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CSG_ProximityIndicationCapability_specs_1 = {
	sizeof(struct CSG_ProximityIndicationCapability),
	offsetof(struct CSG_ProximityIndicationCapability, _asn_ctx),
	asn_MAP_CSG_ProximityIndicationCapability_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_CSG_ProximityIndicationCapability_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CSG_ProximityIndicationCapability = {
	"CSG-ProximityIndicationCapability",
	"CSG-ProximityIndicationCapability",
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
	asn_DEF_CSG_ProximityIndicationCapability_tags_1,
	sizeof(asn_DEF_CSG_ProximityIndicationCapability_tags_1)
		/sizeof(asn_DEF_CSG_ProximityIndicationCapability_tags_1[0]), /* 1 */
	asn_DEF_CSG_ProximityIndicationCapability_tags_1,	/* Same as above */
	sizeof(asn_DEF_CSG_ProximityIndicationCapability_tags_1)
		/sizeof(asn_DEF_CSG_ProximityIndicationCapability_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CSG_ProximityIndicationCapability_1,
	3,	/* Elements count */
	&asn_SPC_CSG_ProximityIndicationCapability_specs_1	/* Additional specs */
};
