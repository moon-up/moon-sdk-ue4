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
#include "OpenAPISolanaApi.h"

#include "OpenAPIAccountAPIResponse.h"
#include "OpenAPISolanaAPIResponse.h"
#include "OpenAPISolanaInput.h"
#include "OpenAPISolanaTransactionInput.h"

namespace MoonSDK
{

/* 

*/
class MOONSDK_API OpenAPISolanaApi::CreateSolanaAccountRequest : public Request
{
public:
    virtual ~CreateSolanaAccountRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	OpenAPISolanaInput OpenAPISolanaInput;
};

class MOONSDK_API OpenAPISolanaApi::CreateSolanaAccountResponse : public Response
{
public:
    virtual ~CreateSolanaAccountResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountAPIResponse Content;
};

/* 

*/
class MOONSDK_API OpenAPISolanaApi::GetSolanaAccountRequest : public Request
{
public:
    virtual ~GetSolanaAccountRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString AccountName;
};

class MOONSDK_API OpenAPISolanaApi::GetSolanaAccountResponse : public Response
{
public:
    virtual ~GetSolanaAccountResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountAPIResponse Content;
};

/* 

*/
class MOONSDK_API OpenAPISolanaApi::ListSolanaAccountsRequest : public Request
{
public:
    virtual ~ListSolanaAccountsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
};

class MOONSDK_API OpenAPISolanaApi::ListSolanaAccountsResponse : public Response
{
public:
    virtual ~ListSolanaAccountsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountAPIResponse Content;
};

/* 

*/
class MOONSDK_API OpenAPISolanaApi::SignSolanaTransactionRequest : public Request
{
public:
    virtual ~SignSolanaTransactionRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString AccountName;
	OpenAPISolanaTransactionInput OpenAPISolanaTransactionInput;
};

class MOONSDK_API OpenAPISolanaApi::SignSolanaTransactionResponse : public Response
{
public:
    virtual ~SignSolanaTransactionResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPISolanaAPIResponse Content;
};

}
