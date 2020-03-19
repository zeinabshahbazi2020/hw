/*
 * Generated by asn1c-0.9.29 n1 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-15-04.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "X2N_UL-InterferenceOverloadIndication.h"

asn_per_constraints_t asn_PER_type_X2N_UL_InterferenceOverloadIndication_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 7,  7,  1,  110 }	/* (SIZE(1..110)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_X2N_UL_InterferenceOverloadIndication_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_X2N_UL_InterferenceOverloadIndication_Item,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_X2N_UL_InterferenceOverloadIndication_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_X2N_UL_InterferenceOverloadIndication_specs_1 = {
	sizeof(struct X2N_UL_InterferenceOverloadIndication),
	offsetof(struct X2N_UL_InterferenceOverloadIndication, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
asn_TYPE_descriptor_t asn_DEF_X2N_UL_InterferenceOverloadIndication = {
	"UL-InterferenceOverloadIndication",
	"UL-InterferenceOverloadIndication",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_X2N_UL_InterferenceOverloadIndication_tags_1,
	sizeof(asn_DEF_X2N_UL_InterferenceOverloadIndication_tags_1)
		/sizeof(asn_DEF_X2N_UL_InterferenceOverloadIndication_tags_1[0]), /* 1 */
	asn_DEF_X2N_UL_InterferenceOverloadIndication_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2N_UL_InterferenceOverloadIndication_tags_1)
		/sizeof(asn_DEF_X2N_UL_InterferenceOverloadIndication_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_X2N_UL_InterferenceOverloadIndication_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_X2N_UL_InterferenceOverloadIndication_1,
	1,	/* Single element */
	&asn_SPC_X2N_UL_InterferenceOverloadIndication_specs_1	/* Additional specs */
};

