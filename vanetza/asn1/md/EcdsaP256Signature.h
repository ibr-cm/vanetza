/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "asn1/IEEE1609dot2BaseTypes_MD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_EcdsaP256Signature_H_
#define	_EcdsaP256Signature_H_


#include "asn_application.h"

/* Including external dependencies */
#include "EccP256CurvePoint.h"
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* EcdsaP256Signature */
typedef struct EcdsaP256Signature {
	EccP256CurvePoint_t	 rSig;
	OCTET_STRING_t	 sSig;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EcdsaP256Signature_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EcdsaP256Signature;
extern asn_SEQUENCE_specifics_t asn_SPC_EcdsaP256Signature_specs_1;
extern asn_TYPE_member_t asn_MBR_EcdsaP256Signature_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _EcdsaP256Signature_H_ */
#include "asn_internal.h"
