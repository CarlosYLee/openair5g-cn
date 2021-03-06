/**
* AMF Communicaiton Service
* AMF Communication Service
*
* OpenAPI spec version: 1.R15.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "UeContextCreateError.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

UeContextCreateError::UeContextCreateError()
{
    m_NgapCause = 0;
    m_NgapCauseIsSet = false;
    
}

UeContextCreateError::~UeContextCreateError()
{
}

void UeContextCreateError::validate()
{
    // TODO: implement validation
}

nlohmann::json UeContextCreateError::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["error"] = ModelBase::toJson(m_Error);
    if(m_NgapCauseIsSet)
    {
        val["ngapCause"] = m_NgapCause;
    }
    

    return val;
}

void UeContextCreateError::fromJson(const nlohmann::json& val)
{
    if(val.find("ngapCause") != val.end())
    {
        setNgapCause(val.at("ngapCause"));
    }
    
}


ProblemDetails UeContextCreateError::getError() const
{
    return m_Error;
}
void UeContextCreateError::setError(ProblemDetails const& value)
{
    m_Error = value;
    
}
int32_t UeContextCreateError::getNgapCause() const
{
    return m_NgapCause;
}
void UeContextCreateError::setNgapCause(int32_t const value)
{
    m_NgapCause = value;
    m_NgapCauseIsSet = true;
}
bool UeContextCreateError::ngapCauseIsSet() const
{
    return m_NgapCauseIsSet;
}
void UeContextCreateError::unsetNgapCause()
{
    m_NgapCauseIsSet = false;
}

}
}
}
}

