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
 * ReleaseUEContxtApi.h
 *
 * 
 */

#ifndef ReleaseUEContxtApi_H_
#define ReleaseUEContxtApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>


#include "ProblemDetails.h"
#include "UEContextRelease.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class  ReleaseUEContxtApi {
public:
    ReleaseUEContxtApi(std::shared_ptr<Pistache::Rest::Router>);
    virtual ~ReleaseUEContxtApi() {}
    void init();

    const std::string base = "/namf-comm/v1";

private:
    void setupRoutes();

    void release_ue_context_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void release_ue_contxt_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    std::shared_ptr<Pistache::Rest::Router> router;

    /// <summary>
    /// Namf_Communication ReleaseUEContext service Operation
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="ueContextId">UE Context Identifier</param>
    /// <param name="uEContextRelease"></param>
    virtual void release_ue_context(const std::string &ueContextId, const UEContextRelease &uEContextRelease, Pistache::Http::ResponseWriter &response) = 0;

};

}
}
}
}

#endif /* ReleaseUEContxtApi_H_ */

