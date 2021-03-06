#include <stdint.h>
    
#include "ngap_common.h"
#include "dynamic_memory_check.h"
#include "log.h"

int                                     asn_debug = 0;
int                                     asn1_xer_print = 0;

ssize_t
ngap_generate_unsuccessfull_outcome (
  uint8_t ** buffer,
  uint32_t * length,
  e_Ngap_ProcedureCode procedureCode,
  Ngap_Criticality_t criticality,
  asn_TYPE_descriptor_t * td,
  void *sptr)
{
  NGAP_PDU_t                              pdu;
  ssize_t                                 encoded;

  memset (&pdu, 0, sizeof (NGAP_PDU_t));
  pdu.present = NGAP_PDU_PR_unsuccessfulOutcome;
  pdu.choice.unsuccessfulOutcome.procedureCode = procedureCode;
  pdu.choice.unsuccessfulOutcome.criticality = criticality;
  ANY_fromType (&pdu.choice.unsuccessfulOutcome.value, td, sptr);

  if (asn1_xer_print) {
    xer_fprint (stdout, &asn_DEF_NGAP_PDU, (void *)&pdu);
  }

  /*
   * We can safely free list of IE from sptr
   */
  ASN_STRUCT_FREE_CONTENTS_ONLY (*td, sptr);

  if ((encoded = uper_encode_to_new_buffer (&asn_DEF_NGAP_PDU, 0, &pdu, (void **)buffer)) < 0) {
    OAILOG_ERROR (LOG_S1AP, "Encoding of %s failed\n", td->name);
    return -1;
  }

  *length = encoded;
  return encoded;
}

Ngap_IE_t                              *
ngap_new_ie (
  Ngap_ProtocolIE_ID_t id,
  Ngap_Criticality_t criticality,
  asn_TYPE_descriptor_t * type,
  void *sptr)
{ 
  Ngap_IE_t                              *buff;
  
  if ((buff = malloc (sizeof (Ngap_IE_t))) == NULL) {
    // Possible error on malloc
    return NULL;
  }
  
  memset ((void *)buff, 0, sizeof (Ngap_IE_t));
  buff->id = id;
  buff->criticality = criticality;
  
  if (ANY_fromType (&buff->value, type, sptr) < 0) {
    OAILOG_ERROR (LOG_S1AP, "Encoding of %s failed\n", type->name);
    free_wrapper ((void**) &buff);
    return NULL;
  }
  
  if (asn1_xer_print)
    if (xer_fprint (stdout, &asn_DEF_Ngap_IE, buff) < 0) {
      free_wrapper ((void**) &buff);
      return NULL;
    }
  
  return buff;
}
