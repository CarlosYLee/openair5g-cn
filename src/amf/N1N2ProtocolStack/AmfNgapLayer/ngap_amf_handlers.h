#include "intertask_interface.h"
#include "ngap_ies_defs.h"

int ngap_handle_new_association(sctp_new_peer_t *sctp_new_peer_p);

int ngap_amf_handle_ng_setup_request(const sctp_assoc_id_t assoc_id, const sctp_stream_id_t stream,
                                     struct ngap_message_s *message_p);
