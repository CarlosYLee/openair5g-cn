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
/*
 * UEContextRelease.h
 *
 * 
 */

#ifndef UEContextRelease_H_
#define UEContextRelease_H_


#include "ModelBase.h"

#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  UEContextRelease
    : public ModelBase
{
public:
    UEContextRelease();
    virtual ~UEContextRelease();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// UEContextRelease members

    /// <summary>
    /// 
    /// </summary>
    std::string getSupi() const;
    void setSupi(std::string const& value);
    bool supiIsSet() const;
    void unsetSupi();
    /// <summary>
    /// 
    /// </summary>
    bool isUnauthenticatedSupi() const;
    void setUnauthenticatedSupi(bool const value);
    bool unauthenticatedSupiIsSet() const;
    void unsetUnauthenticatedSupi();
    /// <summary>
    /// 
    /// </summary>
    int32_t getNgapCause() const;
    void setNgapCause(int32_t const value);
    
protected:
    std::string m_Supi;
    bool m_SupiIsSet;
    bool m_UnauthenticatedSupi;
    bool m_UnauthenticatedSupiIsSet;
    int32_t m_NgapCause;

};

}
}
}
}

#endif /* UEContextRelease_H_ */
