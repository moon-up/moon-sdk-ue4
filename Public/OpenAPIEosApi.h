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

#include "CoreMinimal.h"
#include "OpenAPIBaseModel.h"

namespace OpenAPI
{

class OPENAPI_API OpenAPIEosApi
{
public:
	OpenAPIEosApi();
	~OpenAPIEosApi();

	/* Sets the URL Endpoint.
	* Note: several fallback endpoints can be configured in request retry policies, see Request::SetShouldRetry */
	void SetURL(const FString& Url);

	/* Adds global header params to all requests */
	void AddHeaderParam(const FString& Key, const FString& Value);
	void ClearHeaderParams();

	/* Sets the retry manager to the user-defined retry manager. User must manage the lifetime of the retry manager.
	* If no retry manager is specified and a request needs retries, a default retry manager will be used.
	* See also: Request::SetShouldRetry */
	void SetHttpRetryManager(FHttpRetrySystem::FManager& RetryManager);
	FHttpRetrySystem::FManager& GetHttpRetryManager();

	class CreateEosAccountRequest;
	class CreateEosAccountResponse;
	class GetEosAccountRequest;
	class GetEosAccountResponse;
	class ListEosAccountsRequest;
	class ListEosAccountsResponse;
	class SignEosTransactionRequest;
	class SignEosTransactionResponse;
	
    DECLARE_DELEGATE_OneParam(FCreateEosAccountDelegate, const CreateEosAccountResponse&);
    DECLARE_DELEGATE_OneParam(FGetEosAccountDelegate, const GetEosAccountResponse&);
    DECLARE_DELEGATE_OneParam(FListEosAccountsDelegate, const ListEosAccountsResponse&);
    DECLARE_DELEGATE_OneParam(FSignEosTransactionDelegate, const SignEosTransactionResponse&);
    
    FHttpRequestPtr CreateEosAccount(const CreateEosAccountRequest& Request, const FCreateEosAccountDelegate& Delegate = FCreateEosAccountDelegate()) const;
    FHttpRequestPtr GetEosAccount(const GetEosAccountRequest& Request, const FGetEosAccountDelegate& Delegate = FGetEosAccountDelegate()) const;
    FHttpRequestPtr ListEosAccounts(const ListEosAccountsRequest& Request, const FListEosAccountsDelegate& Delegate = FListEosAccountsDelegate()) const;
    FHttpRequestPtr SignEosTransaction(const SignEosTransactionRequest& Request, const FSignEosTransactionDelegate& Delegate = FSignEosTransactionDelegate()) const;
    
private:
    void OnCreateEosAccountResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FCreateEosAccountDelegate Delegate) const;
    void OnGetEosAccountResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetEosAccountDelegate Delegate) const;
    void OnListEosAccountsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FListEosAccountsDelegate Delegate) const;
    void OnSignEosTransactionResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSignEosTransactionDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}