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

class MOONSDK_API OpenAPIAaveApi
{
public:
	OpenAPIAaveApi();
	~OpenAPIAaveApi();

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

	class BorrowRequest;
	class BorrowResponse;
	class LendRequest;
	class LendResponse;
	class RepayRequest;
	class RepayResponse;
	class UserReserveDataRequest;
	class UserReserveDataResponse;
	
    DECLARE_DELEGATE_OneParam(FBorrowDelegate, const BorrowResponse&);
    DECLARE_DELEGATE_OneParam(FLendDelegate, const LendResponse&);
    DECLARE_DELEGATE_OneParam(FRepayDelegate, const RepayResponse&);
    DECLARE_DELEGATE_OneParam(FUserReserveDataDelegate, const UserReserveDataResponse&);
    
    FHttpRequestPtr Borrow(const BorrowRequest& Request, const FBorrowDelegate& Delegate = FBorrowDelegate()) const;
    FHttpRequestPtr Lend(const LendRequest& Request, const FLendDelegate& Delegate = FLendDelegate()) const;
    FHttpRequestPtr Repay(const RepayRequest& Request, const FRepayDelegate& Delegate = FRepayDelegate()) const;
    FHttpRequestPtr UserReserveData(const UserReserveDataRequest& Request, const FUserReserveDataDelegate& Delegate = FUserReserveDataDelegate()) const;
    
private:
    void OnBorrowResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FBorrowDelegate Delegate) const;
    void OnLendResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FLendDelegate Delegate) const;
    void OnRepayResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRepayDelegate Delegate) const;
    void OnUserReserveDataResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FUserReserveDataDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
