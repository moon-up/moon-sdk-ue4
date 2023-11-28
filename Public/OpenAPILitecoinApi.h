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

class OPENAPI_API OpenAPILitecoinApi
{
public:
	OpenAPILitecoinApi();
	~OpenAPILitecoinApi();

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

	class CreateLitecoinAccountRequest;
	class CreateLitecoinAccountResponse;
	class GetLitecoinAccountRequest;
	class GetLitecoinAccountResponse;
	class ListLitecoinAccountsRequest;
	class ListLitecoinAccountsResponse;
	class SignLitecoinTransactionRequest;
	class SignLitecoinTransactionResponse;
	
    DECLARE_DELEGATE_OneParam(FCreateLitecoinAccountDelegate, const CreateLitecoinAccountResponse&);
    DECLARE_DELEGATE_OneParam(FGetLitecoinAccountDelegate, const GetLitecoinAccountResponse&);
    DECLARE_DELEGATE_OneParam(FListLitecoinAccountsDelegate, const ListLitecoinAccountsResponse&);
    DECLARE_DELEGATE_OneParam(FSignLitecoinTransactionDelegate, const SignLitecoinTransactionResponse&);
    
    FHttpRequestPtr CreateLitecoinAccount(const CreateLitecoinAccountRequest& Request, const FCreateLitecoinAccountDelegate& Delegate = FCreateLitecoinAccountDelegate()) const;
    FHttpRequestPtr GetLitecoinAccount(const GetLitecoinAccountRequest& Request, const FGetLitecoinAccountDelegate& Delegate = FGetLitecoinAccountDelegate()) const;
    FHttpRequestPtr ListLitecoinAccounts(const ListLitecoinAccountsRequest& Request, const FListLitecoinAccountsDelegate& Delegate = FListLitecoinAccountsDelegate()) const;
    FHttpRequestPtr SignLitecoinTransaction(const SignLitecoinTransactionRequest& Request, const FSignLitecoinTransactionDelegate& Delegate = FSignLitecoinTransactionDelegate()) const;
    
private:
    void OnCreateLitecoinAccountResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FCreateLitecoinAccountDelegate Delegate) const;
    void OnGetLitecoinAccountResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetLitecoinAccountDelegate Delegate) const;
    void OnListLitecoinAccountsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FListLitecoinAccountsDelegate Delegate) const;
    void OnSignLitecoinTransactionResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSignLitecoinTransactionDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}