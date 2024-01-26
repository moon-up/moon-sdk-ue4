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

class MOONSDK_API OpenAPIDogeCoinApi
{
public:
	OpenAPIDogeCoinApi();
	~OpenAPIDogeCoinApi();

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

	class CreateDogeCoinAccountRequest;
	class CreateDogeCoinAccountResponse;
	class GetDogeCoinAccountRequest;
	class GetDogeCoinAccountResponse;
	class ListDogeCoinAccountsRequest;
	class ListDogeCoinAccountsResponse;
	class SignDogeCoinTransactionRequest;
	class SignDogeCoinTransactionResponse;
	
    DECLARE_DELEGATE_OneParam(FCreateDogeCoinAccountDelegate, const CreateDogeCoinAccountResponse&);
    DECLARE_DELEGATE_OneParam(FGetDogeCoinAccountDelegate, const GetDogeCoinAccountResponse&);
    DECLARE_DELEGATE_OneParam(FListDogeCoinAccountsDelegate, const ListDogeCoinAccountsResponse&);
    DECLARE_DELEGATE_OneParam(FSignDogeCoinTransactionDelegate, const SignDogeCoinTransactionResponse&);
    
    FHttpRequestPtr CreateDogeCoinAccount(const CreateDogeCoinAccountRequest& Request, const FCreateDogeCoinAccountDelegate& Delegate = FCreateDogeCoinAccountDelegate()) const;
    FHttpRequestPtr GetDogeCoinAccount(const GetDogeCoinAccountRequest& Request, const FGetDogeCoinAccountDelegate& Delegate = FGetDogeCoinAccountDelegate()) const;
    FHttpRequestPtr ListDogeCoinAccounts(const ListDogeCoinAccountsRequest& Request, const FListDogeCoinAccountsDelegate& Delegate = FListDogeCoinAccountsDelegate()) const;
    FHttpRequestPtr SignDogeCoinTransaction(const SignDogeCoinTransactionRequest& Request, const FSignDogeCoinTransactionDelegate& Delegate = FSignDogeCoinTransactionDelegate()) const;
    
private:
    void OnCreateDogeCoinAccountResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FCreateDogeCoinAccountDelegate Delegate) const;
    void OnGetDogeCoinAccountResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetDogeCoinAccountDelegate Delegate) const;
    void OnListDogeCoinAccountsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FListDogeCoinAccountsDelegate Delegate) const;
    void OnSignDogeCoinTransactionResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSignDogeCoinTransactionDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
