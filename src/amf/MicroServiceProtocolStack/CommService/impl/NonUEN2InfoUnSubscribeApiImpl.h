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
* NonUEN2InfoUnSubscribeApiImpl.h
*
* 
*/

#ifndef NON_UEN2_INFO_UN_SUBSCRIBE_API_IMPL_H_
#define NON_UEN2_INFO_UN_SUBSCRIBE_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <NonUEN2InfoUnSubscribeApi.h>

#include <pistache/optional.h>

#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {



class NonUEN2InfoUnSubscribeApiImpl : public org::openapitools::server::api::NonUEN2InfoUnSubscribeApi {
public:
    NonUEN2InfoUnSubscribeApiImpl(std::shared_ptr<Pistache::Rest::Router>);
    ~NonUEN2InfoUnSubscribeApiImpl() {}

    void non_ue_n2_info_un_subscribe(const std::string &n2NotifySubscriptionId, Pistache::Http::ResponseWriter &response);

};

}
}
}
}



#endif