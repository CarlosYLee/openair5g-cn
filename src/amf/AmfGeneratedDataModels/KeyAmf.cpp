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


#include "KeyAmf.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

KeyAmf::KeyAmf()
{
    m_KeyVal = "";
    
}

KeyAmf::~KeyAmf()
{
}

void KeyAmf::validate()
{
    // TODO: implement validation
}

nlohmann::json KeyAmf::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["keyType"] = ModelBase::toJson(m_KeyType);
    val["keyVal"] = ModelBase::toJson(m_KeyVal);
    

    return val;
}

void KeyAmf::fromJson(const nlohmann::json& val)
{
    setKeyVal(val.at("keyVal"));
    
}


KeyAmfType KeyAmf::getKeyType() const
{
    return m_KeyType;
}
void KeyAmf::setKeyType(KeyAmfType const& value)
{
    m_KeyType = value;
    
}
std::string KeyAmf::getKeyVal() const
{
    return m_KeyVal;
}
void KeyAmf::setKeyVal(std::string const& value)
{
    m_KeyVal = value;
    
}

}
}
}
}

