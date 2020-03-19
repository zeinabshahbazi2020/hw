/*
 * Generated by asn1c-0.9.29 n1 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-15-04.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "X2N_ExpectedIdlePeriod.h"

int
X2N_ExpectedIdlePeriod_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if(((value >= 1 && value <= 30) || (value == 40) || (value == 50) || (value == 60) || (value == 80) || (value == 100) || (value == 120) || (value == 150) || (value >= 180 && value <= 181))) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_X2N_ExpectedIdlePeriod_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  8,  8,  1,  181 }	/* (1..181,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_X2N_ExpectedIdlePeriod_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_X2N_ExpectedIdlePeriod = {
	"ExpectedIdlePeriod",
	"ExpectedIdlePeriod",
	&asn_OP_NativeInteger,
	asn_DEF_X2N_ExpectedIdlePeriod_tags_1,
	sizeof(asn_DEF_X2N_ExpectedIdlePeriod_tags_1)
		/sizeof(asn_DEF_X2N_ExpectedIdlePeriod_tags_1[0]), /* 1 */
	asn_DEF_X2N_ExpectedIdlePeriod_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2N_ExpectedIdlePeriod_tags_1)
		/sizeof(asn_DEF_X2N_ExpectedIdlePeriod_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_X2N_ExpectedIdlePeriod_constr_1, X2N_ExpectedIdlePeriod_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};

