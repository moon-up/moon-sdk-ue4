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

class MOONSDK_API OpenAPIYearnApi
{
public:
	OpenAPIYearnApi();
	~OpenAPIYearnApi();

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

	class AddLiquidityRequest;
	class AddLiquidityResponse;
	class AddLiquidityWethRequest;
	class AddLiquidityWethResponse;
	class RemoveLiquidityRequest;
	class RemoveLiquidityResponse;
	class RemoveLiquidityWethRequest;
	class RemoveLiquidityWethResponse;
	
    DECLARE_DELEGATE_OneParam(FAddLiquidityDelegate, const AddLiquidityResponse&);
    DECLARE_DELEGATE_OneParam(FAddLiquidityWethDelegate, const AddLiquidityWethResponse&);
    DECLARE_DELEGATE_OneParam(FRemoveLiquidityDelegate, const RemoveLiquidityResponse&);
    DECLARE_DELEGATE_OneParam(FRemoveLiquidityWethDelegate, const RemoveLiquidityWethResponse&);
    
    FHttpRequestPtr AddLiquidity(const AddLiquidityRequest& Request, const FAddLiquidityDelegate& Delegate = FAddLiquidityDelegate()) const;
    FHttpRequestPtr AddLiquidityWeth(const AddLiquidityWethRequest& Request, const FAddLiquidityWethDelegate& Delegate = FAddLiquidityWethDelegate()) const;
    FHttpRequestPtr RemoveLiquidity(const RemoveLiquidityRequest& Request, const FRemoveLiquidityDelegate& Delegate = FRemoveLiquidityDelegate()) const;
    FHttpRequestPtr RemoveLiquidityWeth(const RemoveLiquidityWethRequest& Request, const FRemoveLiquidityWethDelegate& Delegate = FRemoveLiquidityWethDelegate()) const;
    
private:
    void OnAddLiquidityResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FAddLiquidityDelegate Delegate) const;
    void OnAddLiquidityWethResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FAddLiquidityWethDelegate Delegate) const;
    void OnRemoveLiquidityResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRemoveLiquidityDelegate Delegate) const;
    void OnRemoveLiquidityWethResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRemoveLiquidityWethDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
