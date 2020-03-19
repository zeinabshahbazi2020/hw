/*
 * Generated by asn1c-0.9.29 n1 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-15-04.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_X2N_M6Configuration_H_
#define	_X2N_M6Configuration_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2N_M6report-interval.h"
#include "X2N_M6delay-threshold.h"
#include "X2N_Links-to-log.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2N_ProtocolExtensionContainer;

/* X2N_M6Configuration */
typedef struct X2N_M6Configuration {
	X2N_M6report_interval_t	 m6report_interval;
	X2N_M6delay_threshold_t	*m6delay_threshold;	/* OPTIONAL */
	X2N_Links_to_log_t	 m6_links_to_log;
	struct X2N_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2N_M6Configuration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2N_M6Configuration;

#ifdef __cplusplus
}
#endif

#endif	/* _X2N_M6Configuration_H_ */
#include <asn_internal.h>
