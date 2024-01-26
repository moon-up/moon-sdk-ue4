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

namespace MoonSDK
{

/*
 * OpenAPIErc1155Response
 *
 * 
 */
class MOONSDK_API OpenAPIErc1155Response : public Model
{
public:
    virtual ~OpenAPIErc1155Response() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<double> Type;
	TOptional<double> ChainId;
	TOptional<FString> Data;
	TOptional<FString> Gas;
	TOptional<FString> GasPrice;
	TOptional<FString> GasTipCap;
	TOptional<FString> GasFeeCap;
	TOptional<FString> Value;
	TOptional<double> Nonce;
	TOptional<FString> From;
	TOptional<FString> To;
	TOptional<FString> BlobGas;
	TOptional<FString> BlobGasFeeCap;
	TOptional<TArray<FString>> BlobHashes;
	TOptional<FString> V;
	TOptional<FString> R;
	TOptional<FString> S;
	TOptional<FString> BalanceOf;
	TOptional<FString> BalanceOfBatch;
};

}
