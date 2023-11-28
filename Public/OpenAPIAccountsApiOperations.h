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
#include "OpenAPIAccountsApi.h"

#include "OpenAPIAccountControllerResponse.h"
#include "OpenAPIBroadcastInput.h"
#include "OpenAPICreateAccountInput.h"
#include "OpenAPIDeployInput.h"
#include "OpenAPIInputBody.h"
#include "OpenAPISignMessage.h"
#include "OpenAPISignTypedData.h"

namespace OpenAPI
{

/* 

*/
class OPENAPI_API OpenAPIAccountsApi::BroadcastTxRequest : public Request
{
public:
    virtual ~BroadcastTxRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString AccountName;
	OpenAPIBroadcastInput OpenAPIBroadcastInput;
};

class OPENAPI_API OpenAPIAccountsApi::BroadcastTxResponse : public Response
{
public:
    virtual ~BroadcastTxResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIAccountsApi::CreateAccountRequest : public Request
{
public:
    virtual ~CreateAccountRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	OpenAPICreateAccountInput OpenAPICreateAccountInput;
};

class OPENAPI_API OpenAPIAccountsApi::CreateAccountResponse : public Response
{
public:
    virtual ~CreateAccountResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIAccountsApi::DeleteAccountRequest : public Request
{
public:
    virtual ~DeleteAccountRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString AccountName;
};

class OPENAPI_API OpenAPIAccountsApi::DeleteAccountResponse : public Response
{
public:
    virtual ~DeleteAccountResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIAccountsApi::DeployContractRequest : public Request
{
public:
    virtual ~DeployContractRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString AccountName;
	OpenAPIDeployInput OpenAPIDeployInput;
};

class OPENAPI_API OpenAPIAccountsApi::DeployContractResponse : public Response
{
public:
    virtual ~DeployContractResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIAccountsApi::GetAccountRequest : public Request
{
public:
    virtual ~GetAccountRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString AccountName;
};

class OPENAPI_API OpenAPIAccountsApi::GetAccountResponse : public Response
{
public:
    virtual ~GetAccountResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIAccountsApi::GetBalanceRequest : public Request
{
public:
    virtual ~GetBalanceRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString AccountName;
	FString Authorization;
	FString ChainId;
};

class OPENAPI_API OpenAPIAccountsApi::GetBalanceResponse : public Response
{
public:
    virtual ~GetBalanceResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIAccountsApi::GetNonceRequest : public Request
{
public:
    virtual ~GetNonceRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString AccountName;
	FString Authorization;
};

class OPENAPI_API OpenAPIAccountsApi::GetNonceResponse : public Response
{
public:
    virtual ~GetNonceResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIAccountsApi::ListAccountsRequest : public Request
{
public:
    virtual ~ListAccountsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
};

class OPENAPI_API OpenAPIAccountsApi::ListAccountsResponse : public Response
{
public:
    virtual ~ListAccountsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIAccountsApi::SignMessageRequest : public Request
{
public:
    virtual ~SignMessageRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString AccountName;
	FString Authorization;
	OpenAPISignMessage OpenAPISignMessage;
};

class OPENAPI_API OpenAPIAccountsApi::SignMessageResponse : public Response
{
public:
    virtual ~SignMessageResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIAccountsApi::SignTransactionRequest : public Request
{
public:
    virtual ~SignTransactionRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString AccountName;
	FString Authorization;
	OpenAPIInputBody OpenAPIInputBody;
};

class OPENAPI_API OpenAPIAccountsApi::SignTransactionResponse : public Response
{
public:
    virtual ~SignTransactionResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIAccountsApi::SignTypedDataRequest : public Request
{
public:
    virtual ~SignTypedDataRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString AccountName;
	FString Authorization;
	OpenAPISignTypedData OpenAPISignTypedData;
};

class OPENAPI_API OpenAPIAccountsApi::SignTypedDataResponse : public Response
{
public:
    virtual ~SignTypedDataResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIAccountsApi::TransferEthRequest : public Request
{
public:
    virtual ~TransferEthRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString AccountName;
	FString Authorization;
	OpenAPIInputBody OpenAPIInputBody;
};

class OPENAPI_API OpenAPIAccountsApi::TransferEthResponse : public Response
{
public:
    virtual ~TransferEthResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

}
