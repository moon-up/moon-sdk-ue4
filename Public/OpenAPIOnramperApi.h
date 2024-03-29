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

class MOONSDK_API OpenAPIOnramperApi
{
public:
	OpenAPIOnramperApi();
	~OpenAPIOnramperApi();

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

	class OnRamperCheckoutRequest;
	class OnRamperCheckoutResponse;
	class OnRamperGetQuotesBuyRequest;
	class OnRamperGetQuotesBuyResponse;
	class OnRamperGetQuotesSellRequest;
	class OnRamperGetQuotesSellResponse;
	class OnRamperGetSupportedAssetsRequest;
	class OnRamperGetSupportedAssetsResponse;
	class OnRamperGetSupportedCurrenciesRequest;
	class OnRamperGetSupportedCurrenciesResponse;
	class OnRamperGetSupportedDefaultsAllRequest;
	class OnRamperGetSupportedDefaultsAllResponse;
	class OnRamperGetSupportedOnRampsAllRequest;
	class OnRamperGetSupportedOnRampsAllResponse;
	class OnRamperGetSupportedPaymentTypesRequest;
	class OnRamperGetSupportedPaymentTypesResponse;
	class OnRamperGetSupportedPaymentTypesFiatRequest;
	class OnRamperGetSupportedPaymentTypesFiatResponse;
	
    DECLARE_DELEGATE_OneParam(FOnRamperCheckoutDelegate, const OnRamperCheckoutResponse&);
    DECLARE_DELEGATE_OneParam(FOnRamperGetQuotesBuyDelegate, const OnRamperGetQuotesBuyResponse&);
    DECLARE_DELEGATE_OneParam(FOnRamperGetQuotesSellDelegate, const OnRamperGetQuotesSellResponse&);
    DECLARE_DELEGATE_OneParam(FOnRamperGetSupportedAssetsDelegate, const OnRamperGetSupportedAssetsResponse&);
    DECLARE_DELEGATE_OneParam(FOnRamperGetSupportedCurrenciesDelegate, const OnRamperGetSupportedCurrenciesResponse&);
    DECLARE_DELEGATE_OneParam(FOnRamperGetSupportedDefaultsAllDelegate, const OnRamperGetSupportedDefaultsAllResponse&);
    DECLARE_DELEGATE_OneParam(FOnRamperGetSupportedOnRampsAllDelegate, const OnRamperGetSupportedOnRampsAllResponse&);
    DECLARE_DELEGATE_OneParam(FOnRamperGetSupportedPaymentTypesDelegate, const OnRamperGetSupportedPaymentTypesResponse&);
    DECLARE_DELEGATE_OneParam(FOnRamperGetSupportedPaymentTypesFiatDelegate, const OnRamperGetSupportedPaymentTypesFiatResponse&);
    
    FHttpRequestPtr OnRamperCheckout(const OnRamperCheckoutRequest& Request, const FOnRamperCheckoutDelegate& Delegate = FOnRamperCheckoutDelegate()) const;
    FHttpRequestPtr OnRamperGetQuotesBuy(const OnRamperGetQuotesBuyRequest& Request, const FOnRamperGetQuotesBuyDelegate& Delegate = FOnRamperGetQuotesBuyDelegate()) const;
    FHttpRequestPtr OnRamperGetQuotesSell(const OnRamperGetQuotesSellRequest& Request, const FOnRamperGetQuotesSellDelegate& Delegate = FOnRamperGetQuotesSellDelegate()) const;
    FHttpRequestPtr OnRamperGetSupportedAssets(const OnRamperGetSupportedAssetsRequest& Request, const FOnRamperGetSupportedAssetsDelegate& Delegate = FOnRamperGetSupportedAssetsDelegate()) const;
    FHttpRequestPtr OnRamperGetSupportedCurrencies(const OnRamperGetSupportedCurrenciesRequest& Request, const FOnRamperGetSupportedCurrenciesDelegate& Delegate = FOnRamperGetSupportedCurrenciesDelegate()) const;
    FHttpRequestPtr OnRamperGetSupportedDefaultsAll(const OnRamperGetSupportedDefaultsAllRequest& Request, const FOnRamperGetSupportedDefaultsAllDelegate& Delegate = FOnRamperGetSupportedDefaultsAllDelegate()) const;
    FHttpRequestPtr OnRamperGetSupportedOnRampsAll(const OnRamperGetSupportedOnRampsAllRequest& Request, const FOnRamperGetSupportedOnRampsAllDelegate& Delegate = FOnRamperGetSupportedOnRampsAllDelegate()) const;
    FHttpRequestPtr OnRamperGetSupportedPaymentTypes(const OnRamperGetSupportedPaymentTypesRequest& Request, const FOnRamperGetSupportedPaymentTypesDelegate& Delegate = FOnRamperGetSupportedPaymentTypesDelegate()) const;
    FHttpRequestPtr OnRamperGetSupportedPaymentTypesFiat(const OnRamperGetSupportedPaymentTypesFiatRequest& Request, const FOnRamperGetSupportedPaymentTypesFiatDelegate& Delegate = FOnRamperGetSupportedPaymentTypesFiatDelegate()) const;
    
private:
    void OnOnRamperCheckoutResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FOnRamperCheckoutDelegate Delegate) const;
    void OnOnRamperGetQuotesBuyResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FOnRamperGetQuotesBuyDelegate Delegate) const;
    void OnOnRamperGetQuotesSellResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FOnRamperGetQuotesSellDelegate Delegate) const;
    void OnOnRamperGetSupportedAssetsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FOnRamperGetSupportedAssetsDelegate Delegate) const;
    void OnOnRamperGetSupportedCurrenciesResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FOnRamperGetSupportedCurrenciesDelegate Delegate) const;
    void OnOnRamperGetSupportedDefaultsAllResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FOnRamperGetSupportedDefaultsAllDelegate Delegate) const;
    void OnOnRamperGetSupportedOnRampsAllResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FOnRamperGetSupportedOnRampsAllDelegate Delegate) const;
    void OnOnRamperGetSupportedPaymentTypesResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FOnRamperGetSupportedPaymentTypesDelegate Delegate) const;
    void OnOnRamperGetSupportedPaymentTypesFiatResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FOnRamperGetSupportedPaymentTypesFiatDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
