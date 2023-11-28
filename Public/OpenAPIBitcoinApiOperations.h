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
#include "OpenAPIBitcoinApi.h"

#include "OpenAPIAccountControllerResponse.h"
#include "OpenAPIBitcoinInput.h"
#include "OpenAPIBitcoinTransactionInput.h"

namespace OpenAPI
{

/* 

*/
class OPENAPI_API OpenAPIBitcoinApi::CreateBitcoinAccountRequest : public Request
{
public:
    virtual ~CreateBitcoinAccountRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	OpenAPIBitcoinInput OpenAPIBitcoinInput;
};

class OPENAPI_API OpenAPIBitcoinApi::CreateBitcoinAccountResponse : public Response
{
public:
    virtual ~CreateBitcoinAccountResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIBitcoinApi::GetBitcoinAccountRequest : public Request
{
public:
    virtual ~GetBitcoinAccountRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString AccountName;
};

class OPENAPI_API OpenAPIBitcoinApi::GetBitcoinAccountResponse : public Response
{
public:
    virtual ~GetBitcoinAccountResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIBitcoinApi::ListBitcoinAccountsRequest : public Request
{
public:
    virtual ~ListBitcoinAccountsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
};

class OPENAPI_API OpenAPIBitcoinApi::ListBitcoinAccountsResponse : public Response
{
public:
    virtual ~ListBitcoinAccountsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIBitcoinApi::SignBitcoinTransactionRequest : public Request
{
public:
    virtual ~SignBitcoinTransactionRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString AccountName;
	OpenAPIBitcoinTransactionInput OpenAPIBitcoinTransactionInput;
};

class OPENAPI_API OpenAPIBitcoinApi::SignBitcoinTransactionResponse : public Response
{
public:
    virtual ~SignBitcoinTransactionResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

}