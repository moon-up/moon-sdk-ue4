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
#include "OpenAPITronApi.h"

#include "OpenAPIAccountAPIResponse.h"
#include "OpenAPITronAPIResponse.h"
#include "OpenAPITronInput.h"
#include "OpenAPITronTransactionInput.h"

namespace MoonSDK
{

/* 

*/
class MOONSDK_API OpenAPITronApi::CreateTronAccountRequest : public Request
{
public:
    virtual ~CreateTronAccountRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	OpenAPITronInput OpenAPITronInput;
};

class MOONSDK_API OpenAPITronApi::CreateTronAccountResponse : public Response
{
public:
    virtual ~CreateTronAccountResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountAPIResponse Content;
};

/* 

*/
class MOONSDK_API OpenAPITronApi::GetTronAccountRequest : public Request
{
public:
    virtual ~GetTronAccountRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString AccountName;
};

class MOONSDK_API OpenAPITronApi::GetTronAccountResponse : public Response
{
public:
    virtual ~GetTronAccountResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountAPIResponse Content;
};

/* 

*/
class MOONSDK_API OpenAPITronApi::ListTronAccountsRequest : public Request
{
public:
    virtual ~ListTronAccountsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
};

class MOONSDK_API OpenAPITronApi::ListTronAccountsResponse : public Response
{
public:
    virtual ~ListTronAccountsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountAPIResponse Content;
};

/* 

*/
class MOONSDK_API OpenAPITronApi::SignTronTransactionRequest : public Request
{
public:
    virtual ~SignTronTransactionRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString AccountName;
	OpenAPITronTransactionInput OpenAPITronTransactionInput;
};

class MOONSDK_API OpenAPITronApi::SignTronTransactionResponse : public Response
{
public:
    virtual ~SignTronTransactionResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITronAPIResponse Content;
};

}
