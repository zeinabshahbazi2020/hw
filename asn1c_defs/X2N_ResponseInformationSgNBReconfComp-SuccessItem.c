/*
 * Generated by asn1c-0.9.29 n1 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asn_defs/asn1/x2ap-15-04.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "X2N_ResponseInformationSgNBReconfComp-SuccessItem.h"

#include "X2N_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_X2N_ResponseInformationSgNBReconfComp_SuccessItem_1[] = {
	{ ATF_POINTER, 2, offsetof(struct X2N_ResponseInformationSgNBReconfComp_SuccessItem, meNBtoSgNBContainer),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2N_MeNBtoSgNBContainer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"meNBtoSgNBContainer"
		},
	{ ATF_POINTER, 1, offsetof(struct X2N_ResponseInformationSgNBReconfComp_SuccessItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2N_ProtocolExtensionContainer_8231P50,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_X2N_ResponseInformationSgNBReconfComp_SuccessItem_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_X2N_ResponseInformationSgNBReconfComp_SuccessItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2N_ResponseInformationSgNBReconfComp_SuccessItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* meNBtoSgNBContainer */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_X2N_ResponseInformationSgNBReconfComp_SuccessItem_specs_1 = {
	sizeof(struct X2N_ResponseInformationSgNBReconfComp_SuccessItem),
	offsetof(struct X2N_ResponseInformationSgNBReconfComp_SuccessItem, _asn_ctx),
	asn_MAP_X2N_ResponseInformationSgNBReconfComp_SuccessItem_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_X2N_ResponseInformationSgNBReconfComp_SuccessItem_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2N_ResponseInformationSgNBReconfComp_SuccessItem = {
	"ResponseInformationSgNBReconfComp-SuccessItem",
	"ResponseInformationSgNBReconfComp-SuccessItem",
	&asn_OP_SEQUENCE,
	asn_DEF_X2N_ResponseInformationSgNBReconfComp_SuccessItem_tags_1,
	sizeof(asn_DEF_X2N_ResponseInformationSgNBReconfComp_SuccessItem_tags_1)
		/sizeof(asn_DEF_X2N_ResponseInformationSgNBReconfComp_SuccessItem_tags_1[0]), /* 1 */
	asn_DEF_X2N_ResponseInformationSgNBReconfComp_SuccessItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2N_ResponseInformationSgNBReconfComp_SuccessItem_tags_1)
		/sizeof(asn_DEF_X2N_ResponseInformationSgNBReconfComp_SuccessItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2N_ResponseInformationSgNBReconfComp_SuccessItem_1,
	2,	/* Elements count */
	&asn_SPC_X2N_ResponseInformationSgNBReconfComp_SuccessItem_specs_1	/* Additional specs */
};

