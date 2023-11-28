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
#include "OpenAPIAaveReservesData.h"
#include "OpenAPIAccountResponse.h"
#include "OpenAPIBalanceResponse.h"
#include "OpenAPIBitcoinTransactionOutput.h"
#include "OpenAPIBroadCastRawTransactionResponse.h"
#include "OpenAPIENSReverseResolveResponse.h"
#include "OpenAPIEnsResolveResponse.h"
#include "OpenAPIErc1155Response.h"
#include "OpenAPIErc20Response.h"
#include "OpenAPIErc721Response.h"
#include "OpenAPINonceResponse.h"
#include "OpenAPISignMessage.h"
#include "OpenAPITransaction.h"
#include "OpenAPITransactionRequest.h"
#include "OpenAPITx.h"

namespace OpenAPI
{

/*
 * OpenAPIAccountControllerResponseData
 *
 * 
 */
class OPENAPI_API OpenAPIAccountControllerResponseData : public Model
{
public:
    virtual ~OpenAPIAccountControllerResponseData() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	double Nonce = 0.0;
	FString Balance;
	TOptional<FString> MoonScanUrl;
	FString TransactionHash;
	FString SignedTransaction;
	TOptional<FString> SignedMessage;
	TOptional<FString> RawTransaction;
	TOptional<FString> Signature;
	TOptional<TMap<FString, OpenAPITx>> Transaction;
	TOptional<TArray<OpenAPITransactionRequest>> UserOps;
	TOptional<FString> UseropTransaction;
	TOptional<TArray<FString>> Keys;
	FString Address;
	TOptional<FString> Name;
	FString Data;
	TOptional<FString> Encoding;
	TOptional<bool> Header;
	TOptional<bool> Signtype;
	FString Domain;
	FString CurrentAtokenBalance;
	FString CurrentBorrowBalance;
	FString PrincipalBorrowBalance;
	FString BorrowRateMode;
	FString BorrowRate;
	FString LiquidityRate;
	FString OriginationFee;
	FString VariableBorrowIndex;
	FString LastUpdateTimestamp;
	FString UsageAsCollateralEnabled;
	TOptional<FString> Symbol;
	TOptional<FString> Decimals;
	TOptional<FString> TotalSupply;
	TOptional<FString> ContractAddress;
	TOptional<FString> BalanceOf;
	TOptional<FString> Allowance;
	TOptional<FString> BalanceOf;
	TOptional<FString> BalanceOfBatch;
	bool Success = false;
	FString Message;
	TOptional<FString> SignedTx;
	TOptional<FString> OwnerOf;
	TOptional<FString> TokenUri;
	TOptional<FString> IsApprovedForAll;
};

}