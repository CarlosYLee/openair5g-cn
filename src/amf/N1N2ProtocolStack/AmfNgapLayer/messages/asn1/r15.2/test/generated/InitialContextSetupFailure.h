/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU"
 * 	found in "NGAP-PDU.asn"
 * 	`asn1c -D ./generated/`
 */

#ifndef	_InitialContextSetupFailure_H_
#define	_InitialContextSetupFailure_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_IE;

/* InitialContextSetupFailure */
typedef struct InitialContextSetupFailure {
	struct initialContextSetupFailure_ies {
		A_SEQUENCE_OF(struct Ngap_IE) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} initialContextSetupFailure_ies;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InitialContextSetupFailure_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InitialContextSetupFailure;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Ngap-IE.h"

#endif	/* _InitialContextSetupFailure_H_ */
#include <asn_internal.h>