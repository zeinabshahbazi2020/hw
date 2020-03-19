/*
 * Generated by asn1c-0.9.29 n1 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asn_defs/asn1/x2ap-15-04.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_X2N_E_RABs_ToBeModified_SgNBModReqd_Item_H_
#define	_X2N_E_RABs_ToBeModified_SgNBModReqd_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2N_E-RAB-ID.h"
#include "X2N_EN-DC-ResourceConfiguration.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2N_E_RABs_ToBeModified_SgNBModReqd_Item__resource_configuration_PR {
	X2N_E_RABs_ToBeModified_SgNBModReqd_Item__resource_configuration_PR_NOTHING,	/* No components present */
	X2N_E_RABs_ToBeModified_SgNBModReqd_Item__resource_configuration_PR_sgNBPDCPpresent,
	X2N_E_RABs_ToBeModified_SgNBModReqd_Item__resource_configuration_PR_sgNBPDCPnotpresent
	/* Extensions may appear below */
	
} X2N_E_RABs_ToBeModified_SgNBModReqd_Item__resource_configuration_PR;

/* Forward declarations */
struct X2N_ProtocolExtensionContainer;
struct X2N_E_RABs_ToBeModified_SgNBModReqd_Item_SgNBPDCPpresent;
struct X2N_E_RABs_ToBeModified_SgNBModReqd_Item_SgNBPDCPnotpresent;

/* X2N_E-RABs-ToBeModified-SgNBModReqd-Item */
typedef struct X2N_E_RABs_ToBeModified_SgNBModReqd_Item {
	X2N_E_RAB_ID_t	 e_RAB_ID;
	X2N_EN_DC_ResourceConfiguration_t	 en_DC_ResourceConfiguration;
	struct X2N_E_RABs_ToBeModified_SgNBModReqd_Item__resource_configuration {
		X2N_E_RABs_ToBeModified_SgNBModReqd_Item__resource_configuration_PR present;
		union X2N_E_RABs_ToBeModified_SgNBModReqd_Item__X2N_resource_configuration_u {
			struct X2N_E_RABs_ToBeModified_SgNBModReqd_Item_SgNBPDCPpresent	*sgNBPDCPpresent;
			struct X2N_E_RABs_ToBeModified_SgNBModReqd_Item_SgNBPDCPnotpresent	*sgNBPDCPnotpresent;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} resource_configuration;
	struct X2N_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2N_E_RABs_ToBeModified_SgNBModReqd_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2N_E_RABs_ToBeModified_SgNBModReqd_Item;

#ifdef __cplusplus
}
#endif

#endif	/* _X2N_E_RABs_ToBeModified_SgNBModReqd_Item_H_ */
#include <asn_internal.h>
