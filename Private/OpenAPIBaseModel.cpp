/**
 * moon-vault-api
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPIBaseModel.h"

namespace MoonSDK
{

bool HttpRetryManager::Tick(float DeltaTime)
{
	FManager::Update();
	return true;
}

HttpRetryParams::HttpRetryParams(const FRetryLimitCountSetting& InRetryLimitCountOverride /*= FRetryLimitCountSetting()*/,
    const FRetryTimeoutRelativeSecondsSetting& InRetryTimeoutRelativeSecondsOverride /*= FRetryTimeoutRelativeSecondsSetting()*/,
    const FRetryResponseCodes& InRetryResponseCodes /*= FRetryResponseCodes()*/,
    const FRetryVerbs& InRetryVerbs /*= FRetryVerbs()*/,
    const FRetryDomainsPtr& InRetryDomains /*= FRetryDomainsPtr() */)
    : RetryLimitCountOverride(InRetryLimitCountOverride)
    , RetryTimeoutRelativeSecondsOverride(InRetryTimeoutRelativeSecondsOverride)
    , RetryResponseCodes(InRetryResponseCodes)
    , RetryVerbs(InRetryVerbs)
    , RetryDomains(InRetryDomains)
{
}

void Response::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    ResponseCode = InHttpResponseCode;
    SetSuccessful(EHttpResponseCodes::IsOk(InHttpResponseCode));
    if(InHttpResponseCode == EHttpResponseCodes::RequestTimeout)
    {
        SetResponseString(TEXT("Request Timeout"));
    }
}

}
