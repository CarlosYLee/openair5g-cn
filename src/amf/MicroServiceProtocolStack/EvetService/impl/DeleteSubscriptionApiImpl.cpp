/**
* Namf_EventExposure Service
* AMF Event Exposure Service
*
* OpenAPI spec version: 1.R15.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

#include "DeleteSubscriptionApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

DeleteSubscriptionApiImpl::DeleteSubscriptionApiImpl(std::shared_ptr<Pistache::Rest::Router> rtr)
    : DeleteSubscriptionApi(rtr)
    { }

void DeleteSubscriptionApiImpl::delete_subscription(const std::string &subscriptionId, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}

