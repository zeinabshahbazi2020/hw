/*
 * Generated by asn1c-0.9.29 n1 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-CommonDataTypes"
 * 	found in "../../asn_defs/asn1/X2AP-minimized.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_E2N_TriggeringMessage_H_
#define	_E2N_TriggeringMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E2N_TriggeringMessage {
	E2N_TriggeringMessage_initiating_message	= 0,
	E2N_TriggeringMessage_successful_outcome	= 1,
	E2N_TriggeringMessage_unsuccessful_outcome	= 2
} e_E2N_TriggeringMessage;

/* E2N_TriggeringMessage */
typedef long	 E2N_TriggeringMessage_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_E2N_TriggeringMessage_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_E2N_TriggeringMessage;
extern const asn_INTEGER_specifics_t asn_SPC_TriggeringMessage_specs_1;
asn_struct_free_f TriggeringMessage_free;
asn_struct_print_f TriggeringMessage_print;
asn_constr_check_f TriggeringMessage_constraint;
ber_type_decoder_f TriggeringMessage_decode_ber;
der_type_encoder_f TriggeringMessage_encode_der;
xer_type_decoder_f TriggeringMessage_decode_xer;
xer_type_encoder_f TriggeringMessage_encode_xer;
per_type_decoder_f TriggeringMessage_decode_uper;
per_type_encoder_f TriggeringMessage_encode_uper;
per_type_decoder_f TriggeringMessage_decode_aper;
per_type_encoder_f TriggeringMessage_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _E2N_TriggeringMessage_H_ */
#include <asn_internal.h>
