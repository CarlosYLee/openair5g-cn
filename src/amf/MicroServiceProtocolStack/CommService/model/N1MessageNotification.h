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
 * N1MessageNotification.h
 *
 * 
 */

#ifndef N1MessageNotification_H_
#define N1MessageNotification_H_


#include "ModelBase.h"

#include "RegistrationContextContainer.h"
#include "N1MessageContainer.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  N1MessageNotification
    : public ModelBase
{
public:
    N1MessageNotification();
    virtual ~N1MessageNotification();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// N1MessageNotification members

    /// <summary>
    /// 
    /// </summary>
    std::string getN1NotifySubscriptionId() const;
    void setN1NotifySubscriptionId(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    N1MessageContainer getN1MessageContainer() const;
    void setN1MessageContainer(N1MessageContainer const& value);
        /// <summary>
    /// 
    /// </summary>
    RegistrationContextContainer getRegistrationCtxtContainer() const;
    void setRegistrationCtxtContainer(RegistrationContextContainer const& value);
    bool registrationCtxtContainerIsSet() const;
    void unsetRegistrationCtxtContainer();

protected:
    std::string m_N1NotifySubscriptionId;

    N1MessageContainer m_N1MessageContainer;

    RegistrationContextContainer m_RegistrationCtxtContainer;
    bool m_RegistrationCtxtContainerIsSet;
};

}
}
}
}

#endif /* N1MessageNotification_H_ */
