/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "asn1/IEEE1609dot2BaseTypes.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_Time64_H_
#define	_Time64_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Uint64.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Time64 */
typedef Uint64_t	 Time64_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Time64_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Time64;
asn_struct_free_f Time64_free;
asn_struct_print_f Time64_print;
asn_constr_check_f Time64_constraint;
ber_type_decoder_f Time64_decode_ber;
der_type_encoder_f Time64_encode_der;
xer_type_decoder_f Time64_decode_xer;
xer_type_encoder_f Time64_encode_xer;
oer_type_decoder_f Time64_decode_oer;
oer_type_encoder_f Time64_encode_oer;
per_type_decoder_f Time64_decode_uper;
per_type_encoder_f Time64_encode_uper;
per_type_decoder_f Time64_decode_aper;
per_type_encoder_f Time64_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Time64_H_ */
#include "asn_internal.h"
