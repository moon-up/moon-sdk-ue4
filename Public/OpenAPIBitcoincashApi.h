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

class MOONSDK_API OpenAPIBitcoincashApi
{
public:
	OpenAPIBitcoincashApi();
	~OpenAPIBitcoincashApi();

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

	class CreateBitcoinCashAccountRequest;
	class CreateBitcoinCashAccountResponse;
	class GetBitcoinCashAccountRequest;
	class GetBitcoinCashAccountResponse;
	class ListBitcoinCashAccountsRequest;
	class ListBitcoinCashAccountsResponse;
	class SignBitcoinCashTransactionRequest;
	class SignBitcoinCashTransactionResponse;
	
    DECLARE_DELEGATE_OneParam(FCreateBitcoinCashAccountDelegate, const CreateBitcoinCashAccountResponse&);
    DECLARE_DELEGATE_OneParam(FGetBitcoinCashAccountDelegate, const GetBitcoinCashAccountResponse&);
    DECLARE_DELEGATE_OneParam(FListBitcoinCashAccountsDelegate, const ListBitcoinCashAccountsResponse&);
    DECLARE_DELEGATE_OneParam(FSignBitcoinCashTransactionDelegate, const SignBitcoinCashTransactionResponse&);
    
    FHttpRequestPtr CreateBitcoinCashAccount(const CreateBitcoinCashAccountRequest& Request, const FCreateBitcoinCashAccountDelegate& Delegate = FCreateBitcoinCashAccountDelegate()) const;
    FHttpRequestPtr GetBitcoinCashAccount(const GetBitcoinCashAccountRequest& Request, const FGetBitcoinCashAccountDelegate& Delegate = FGetBitcoinCashAccountDelegate()) const;
    FHttpRequestPtr ListBitcoinCashAccounts(const ListBitcoinCashAccountsRequest& Request, const FListBitcoinCashAccountsDelegate& Delegate = FListBitcoinCashAccountsDelegate()) const;
    FHttpRequestPtr SignBitcoinCashTransaction(const SignBitcoinCashTransactionRequest& Request, const FSignBitcoinCashTransactionDelegate& Delegate = FSignBitcoinCashTransactionDelegate()) const;
    
private:
    void OnCreateBitcoinCashAccountResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FCreateBitcoinCashAccountDelegate Delegate) const;
    void OnGetBitcoinCashAccountResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetBitcoinCashAccountDelegate Delegate) const;
    void OnListBitcoinCashAccountsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FListBitcoinCashAccountsDelegate Delegate) const;
    void OnSignBitcoinCashTransactionResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSignBitcoinCashTransactionDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
