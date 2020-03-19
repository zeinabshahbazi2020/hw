/*
 * Generated by asn1c-0.9.29 n1 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-15-04.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_X2N_EnhancedRNTP_H_
#define	_X2N_EnhancedRNTP_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include "X2N_RNTP-Threshold.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2N_EnhancedRNTPStartTime;
struct X2N_ProtocolExtensionContainer;

/* X2N_EnhancedRNTP */
typedef struct X2N_EnhancedRNTP {
	BIT_STRING_t	 enhancedRNTPBitmap;
	X2N_RNTP_Threshold_t	 rNTP_High_Power_Threshold;
	struct X2N_EnhancedRNTPStartTime	*enhancedRNTPStartTime;	/* OPTIONAL */
	struct X2N_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2N_EnhancedRNTP_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2N_EnhancedRNTP;

#ifdef __cplusplus
}
#endif

#endif	/* _X2N_EnhancedRNTP_H_ */
#include <asn_internal.h>
