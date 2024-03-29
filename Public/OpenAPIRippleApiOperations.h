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

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPIRippleApi.h"

#include "OpenAPIAccountAPIResponse.h"
#include "OpenAPIRippleAPIResponse.h"
#include "OpenAPIRippleInput.h"
#include "OpenAPIRippleTransactionInput.h"

namespace MoonSDK
{

/* 

*/
class MOONSDK_API OpenAPIRippleApi::CreateRippleAccountRequest : public Request
{
public:
    virtual ~CreateRippleAccountRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	OpenAPIRippleInput OpenAPIRippleInput;
};

class MOONSDK_API OpenAPIRippleApi::CreateRippleAccountResponse : public Response
{
public:
    virtual ~CreateRippleAccountResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountAPIResponse Content;
};

/* 

*/
class MOONSDK_API OpenAPIRippleApi::GetRippleAccountRequest : public Request
{
public:
    virtual ~GetRippleAccountRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString AccountName;
};

class MOONSDK_API OpenAPIRippleApi::GetRippleAccountResponse : public Response
{
public:
    virtual ~GetRippleAccountResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountAPIResponse Content;
};

/* 

*/
class MOONSDK_API OpenAPIRippleApi::ListRippleAccountsRequest : public Request
{
public:
    virtual ~ListRippleAccountsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
};

class MOONSDK_API OpenAPIRippleApi::ListRippleAccountsResponse : public Response
{
public:
    virtual ~ListRippleAccountsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountAPIResponse Content;
};

/* 

*/
class MOONSDK_API OpenAPIRippleApi::SignRippleTransactionRequest : public Request
{
public:
    virtual ~SignRippleTransactionRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString AccountName;
	OpenAPIRippleTransactionInput OpenAPIRippleTransactionInput;
};

class MOONSDK_API OpenAPIRippleApi::SignRippleTransactionResponse : public Response
{
public:
    virtual ~SignRippleTransactionResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIRippleAPIResponse Content;
};

}
