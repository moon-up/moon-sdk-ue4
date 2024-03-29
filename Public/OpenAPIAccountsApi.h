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

class MOONSDK_API OpenAPIAccountsApi
{
public:
	OpenAPIAccountsApi();
	~OpenAPIAccountsApi();

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

	class BroadcastTxRequest;
	class BroadcastTxResponse;
	class CreateAccountRequest;
	class CreateAccountResponse;
	class DeleteAccountRequest;
	class DeleteAccountResponse;
	class DeployContractRequest;
	class DeployContractResponse;
	class GetAccountRequest;
	class GetAccountResponse;
	class GetBalanceRequest;
	class GetBalanceResponse;
	class GetNonceRequest;
	class GetNonceResponse;
	class ListAccountsRequest;
	class ListAccountsResponse;
	class SignMessageRequest;
	class SignMessageResponse;
	class SignTransactionRequest;
	class SignTransactionResponse;
	class SignTypedDataRequest;
	class SignTypedDataResponse;
	class TransferEthRequest;
	class TransferEthResponse;
	
    DECLARE_DELEGATE_OneParam(FBroadcastTxDelegate, const BroadcastTxResponse&);
    DECLARE_DELEGATE_OneParam(FCreateAccountDelegate, const CreateAccountResponse&);
    DECLARE_DELEGATE_OneParam(FDeleteAccountDelegate, const DeleteAccountResponse&);
    DECLARE_DELEGATE_OneParam(FDeployContractDelegate, const DeployContractResponse&);
    DECLARE_DELEGATE_OneParam(FGetAccountDelegate, const GetAccountResponse&);
    DECLARE_DELEGATE_OneParam(FGetBalanceDelegate, const GetBalanceResponse&);
    DECLARE_DELEGATE_OneParam(FGetNonceDelegate, const GetNonceResponse&);
    DECLARE_DELEGATE_OneParam(FListAccountsDelegate, const ListAccountsResponse&);
    DECLARE_DELEGATE_OneParam(FSignMessageDelegate, const SignMessageResponse&);
    DECLARE_DELEGATE_OneParam(FSignTransactionDelegate, const SignTransactionResponse&);
    DECLARE_DELEGATE_OneParam(FSignTypedDataDelegate, const SignTypedDataResponse&);
    DECLARE_DELEGATE_OneParam(FTransferEthDelegate, const TransferEthResponse&);
    
    FHttpRequestPtr BroadcastTx(const BroadcastTxRequest& Request, const FBroadcastTxDelegate& Delegate = FBroadcastTxDelegate()) const;
    FHttpRequestPtr CreateAccount(const CreateAccountRequest& Request, const FCreateAccountDelegate& Delegate = FCreateAccountDelegate()) const;
    FHttpRequestPtr DeleteAccount(const DeleteAccountRequest& Request, const FDeleteAccountDelegate& Delegate = FDeleteAccountDelegate()) const;
    FHttpRequestPtr DeployContract(const DeployContractRequest& Request, const FDeployContractDelegate& Delegate = FDeployContractDelegate()) const;
    FHttpRequestPtr GetAccount(const GetAccountRequest& Request, const FGetAccountDelegate& Delegate = FGetAccountDelegate()) const;
    FHttpRequestPtr GetBalance(const GetBalanceRequest& Request, const FGetBalanceDelegate& Delegate = FGetBalanceDelegate()) const;
    FHttpRequestPtr GetNonce(const GetNonceRequest& Request, const FGetNonceDelegate& Delegate = FGetNonceDelegate()) const;
    FHttpRequestPtr ListAccounts(const ListAccountsRequest& Request, const FListAccountsDelegate& Delegate = FListAccountsDelegate()) const;
    FHttpRequestPtr SignMessage(const SignMessageRequest& Request, const FSignMessageDelegate& Delegate = FSignMessageDelegate()) const;
    FHttpRequestPtr SignTransaction(const SignTransactionRequest& Request, const FSignTransactionDelegate& Delegate = FSignTransactionDelegate()) const;
    FHttpRequestPtr SignTypedData(const SignTypedDataRequest& Request, const FSignTypedDataDelegate& Delegate = FSignTypedDataDelegate()) const;
    FHttpRequestPtr TransferEth(const TransferEthRequest& Request, const FTransferEthDelegate& Delegate = FTransferEthDelegate()) const;
    
private:
    void OnBroadcastTxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FBroadcastTxDelegate Delegate) const;
    void OnCreateAccountResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FCreateAccountDelegate Delegate) const;
    void OnDeleteAccountResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDeleteAccountDelegate Delegate) const;
    void OnDeployContractResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDeployContractDelegate Delegate) const;
    void OnGetAccountResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetAccountDelegate Delegate) const;
    void OnGetBalanceResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetBalanceDelegate Delegate) const;
    void OnGetNonceResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetNonceDelegate Delegate) const;
    void OnListAccountsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FListAccountsDelegate Delegate) const;
    void OnSignMessageResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSignMessageDelegate Delegate) const;
    void OnSignTransactionResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSignTransactionDelegate Delegate) const;
    void OnSignTypedDataResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FSignTypedDataDelegate Delegate) const;
    void OnTransferEthResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FTransferEthDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}
