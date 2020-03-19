/*
 * Generated by asn1c-0.9.29 n1 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asn_defs/asn1/x2ap-15-04.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "X2N_UE-ContextReferenceAtSgNB.h"

#include "X2N_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_X2N_UE_ContextReferenceAtSgNB_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2N_UE_ContextReferenceAtSgNB, source_GlobalSgNB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2N_GlobalGNB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"source-GlobalSgNB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2N_UE_ContextReferenceAtSgNB, sgNB_UE_X2AP_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2N_SgNB_UE_X2AP_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sgNB-UE-X2AP-ID"
		},
	{ ATF_POINTER, 1, offsetof(struct X2N_UE_ContextReferenceAtSgNB, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2N_ProtocolExtensionContainer_8231P4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_X2N_UE_ContextReferenceAtSgNB_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_X2N_UE_ContextReferenceAtSgNB_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2N_UE_ContextReferenceAtSgNB_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* source-GlobalSgNB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sgNB-UE-X2AP-ID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_X2N_UE_ContextReferenceAtSgNB_specs_1 = {
	sizeof(struct X2N_UE_ContextReferenceAtSgNB),
	offsetof(struct X2N_UE_ContextReferenceAtSgNB, _asn_ctx),
	asn_MAP_X2N_UE_ContextReferenceAtSgNB_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_X2N_UE_ContextReferenceAtSgNB_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2N_UE_ContextReferenceAtSgNB = {
	"UE-ContextReferenceAtSgNB",
	"UE-ContextReferenceAtSgNB",
	&asn_OP_SEQUENCE,
	asn_DEF_X2N_UE_ContextReferenceAtSgNB_tags_1,
	sizeof(asn_DEF_X2N_UE_ContextReferenceAtSgNB_tags_1)
		/sizeof(asn_DEF_X2N_UE_ContextReferenceAtSgNB_tags_1[0]), /* 1 */
	asn_DEF_X2N_UE_ContextReferenceAtSgNB_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2N_UE_ContextReferenceAtSgNB_tags_1)
		/sizeof(asn_DEF_X2N_UE_ContextReferenceAtSgNB_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2N_UE_ContextReferenceAtSgNB_1,
	3,	/* Elements count */
	&asn_SPC_X2N_UE_ContextReferenceAtSgNB_specs_1	/* Additional specs */
};

