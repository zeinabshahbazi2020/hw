/*
 * Generated by asn1c-0.9.29 n1 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-15-04.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_X2N_RelativeNarrowbandTxPower_H_
#define	_X2N_RelativeNarrowbandTxPower_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include "X2N_RNTP-Threshold.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2N_RelativeNarrowbandTxPower__numberOfCellSpecificAntennaPorts {
	X2N_RelativeNarrowbandTxPower__numberOfCellSpecificAntennaPorts_one	= 0,
	X2N_RelativeNarrowbandTxPower__numberOfCellSpecificAntennaPorts_two	= 1,
	X2N_RelativeNarrowbandTxPower__numberOfCellSpecificAntennaPorts_four	= 2
	/*
	 * Enumeration is extensible
	 */
} e_X2N_RelativeNarrowbandTxPower__numberOfCellSpecificAntennaPorts;

/* Forward declarations */
struct X2N_ProtocolExtensionContainer;

/* X2N_RelativeNarrowbandTxPower */
typedef struct X2N_RelativeNarrowbandTxPower {
	BIT_STRING_t	 rNTP_PerPRB;
	X2N_RNTP_Threshold_t	 rNTP_Threshold;
	long	 numberOfCellSpecificAntennaPorts;
	long	 p_B;
	long	 pDCCH_InterferenceImpact;
	struct X2N_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2N_RelativeNarrowbandTxPower_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_X2N_numberOfCellSpecificAntennaPorts_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_X2N_RelativeNarrowbandTxPower;
extern asn_SEQUENCE_specifics_t asn_SPC_X2N_RelativeNarrowbandTxPower_specs_1;
extern asn_TYPE_member_t asn_MBR_X2N_RelativeNarrowbandTxPower_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _X2N_RelativeNarrowbandTxPower_H_ */
#include <asn_internal.h>
