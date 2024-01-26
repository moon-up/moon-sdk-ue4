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

namespace MoonSDK
{

class MOONSDK_API OpenAPIRippleApi
{
public:
	OpenAPIRippleApi();
	~OpenAPIRippleApi();

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

	class CreateRippleAccountRequest;
	class CreateRippleAccountResponse;
	class GetRippleAccountRequest;
	class GetRippleAccountResponse;
	class ListRippleAccountsRequest;
	class ListRippleAccountsResponse;
	class SignRippleTransactionRequest;
	class SignRippleTransactionResponse;
	
    DECLARE_DELEGATE_OneParam(FCreateRippleAccountDelegate, const CreateRippleAccountResponse&);
    DECLARE_DELEGATE_OneParam(FGetRippleAccountDelegate, const GetRippleAccountResponse&);
    DECLARE_DELEGATE_OneParam(FListRippleAccountsDelegate, const ListRippleAccountsResponse&);
    DECLARE_DELEGATE_OneParam(FSignRippleTransactionDelegate, const SignRippleTransactionResponse&);
    
    FHttpRequestPtr CreateRippleAccount(const CreateRippleAccountRequest& Request, const FCreateRippleAccountDelegate& Delegate = FCreateRippleAccountDelegate()) const;
    FHttpRequestPtr GetRippleAccount(const GetRippleAccountRequest& Request, const FGetRippleAccountDelegate& Delegate = FGetRippleAccountDelegate()) const;
    FHttpRequestPtr ListRippleAccounts(const ListRippleAccountsRequest& Request, const FListRippleAccountsDelegate& Delegate = FListRippleAccountsDelegate()) const;
    FHttpRequestPtr SignRippleTransaction(const SignRippleTransactionRequest& Request, const FSignRippleTransactionDelegate& Delegate = FSignRippleTransactionDelegate()) const;
    
private:
    void OnCreateRippleAccountResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FCreateRippleAccountDelegate Delegate) const;
    void OnGetRippleAccountResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetRippleAccountDelegate Delegate) const;
    void OnListRippleAccountsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FListRippleAccountsDelegate Delegate) const;
    void OnSignRippleTransactionResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSignRippleTransactionDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
