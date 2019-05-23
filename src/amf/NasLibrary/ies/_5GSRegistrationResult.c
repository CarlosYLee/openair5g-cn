#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

#include "TLVEncoder.h"
#include "TLVDecoder.h"
#include "_5GSRegistrationResult.h"

int encode__5gs_registration_result ( _5GSRegistrationResult _5gsregistrationresult, uint8_t iei, uint8_t * buffer, uint32_t len  ) 
{
    uint8_t *lenPtr;
    uint32_t encoded = 0;
    uint8_t bitStream = 0x0;
    CHECK_PDU_POINTER_AND_LENGTH_ENCODER (buffer,_5GS_REGISTRATION_RESULT_MINIMUM_LENGTH , len);
    

    if( iei >0  ){
      *buffer=iei;
      encoded++;
    }

    lenPtr = (buffer + encoded);
    encoded++;

    if(_5gsregistrationresult.is_SMS_allowed)
      bitStream |= 0x08;
    bitStream |= (_5gsregistrationresult.registration_result_value & 0x07);
   
    ENCODE_U8(buffer+encoded,bitStream,encoded);

    *lenPtr = encoded - 1 - ((iei > 0) ? 1 : 0);    
    return encoded;
}

int decode__5gs_registration_result ( _5GSRegistrationResult * _5gsregistrationresult, uint8_t iei, uint8_t * buffer, uint32_t len  ) 
{
    int decoded=0;
    uint8_t ielen=0;
    uint8_t bitStream = 0x0;

    if (iei > 0)
    {
        CHECK_IEI_DECODER (iei, *buffer);
        decoded++;
    }

    ielen = *(buffer + decoded);
    decoded++;
    CHECK_LENGTH_DECODER (len - decoded, ielen);

    DECODE_U8(buffer+decoded,bitStream,decoded);

    if(bitStream & 0x08)
      _5gsregistrationresult->is_SMS_allowed = true;
    else
      _5gsregistrationresult->is_SMS_allowed = false;

    _5gsregistrationresult->registration_result_value = (bitStream & 0x07);

    return decoded;
}

