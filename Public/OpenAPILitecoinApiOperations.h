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
#include "OpenAPILitecoinApi.h"

#include "OpenAPIAccountControllerResponse.h"
#include "OpenAPILitecoinInput.h"
#include "OpenAPILitecoinTransactionInput.h"

namespace OpenAPI
{

/* 

*/
class OPENAPI_API OpenAPILitecoinApi::CreateLitecoinAccountRequest : public Request
{
public:
    virtual ~CreateLitecoinAccountRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	OpenAPILitecoinInput OpenAPILitecoinInput;
};

class OPENAPI_API OpenAPILitecoinApi::CreateLitecoinAccountResponse : public Response
{
public:
    virtual ~CreateLitecoinAccountResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPILitecoinApi::GetLitecoinAccountRequest : public Request
{
public:
    virtual ~GetLitecoinAccountRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString AccountName;
};

class OPENAPI_API OpenAPILitecoinApi::GetLitecoinAccountResponse : public Response
{
public:
    virtual ~GetLitecoinAccountResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPILitecoinApi::ListLitecoinAccountsRequest : public Request
{
public:
    virtual ~ListLitecoinAccountsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
};

class OPENAPI_API OpenAPILitecoinApi::ListLitecoinAccountsResponse : public Response
{
public:
    virtual ~ListLitecoinAccountsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPILitecoinApi::SignLitecoinTransactionRequest : public Request
{
public:
    virtual ~SignLitecoinTransactionRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString AccountName;
	OpenAPILitecoinTransactionInput OpenAPILitecoinTransactionInput;
};

class OPENAPI_API OpenAPILitecoinApi::SignLitecoinTransactionResponse : public Response
{
public:
    virtual ~SignLitecoinTransactionResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

}