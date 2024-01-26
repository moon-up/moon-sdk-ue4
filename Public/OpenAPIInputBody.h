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
 * OpenAPIInputBody
 *
 * 
 */
class MOONSDK_API OpenAPIInputBody : public Model
{
public:
    virtual ~OpenAPIInputBody() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<FString> To;
	TOptional<FString> Data;
	TOptional<FString> Input;
	TOptional<FString> Value;
	TOptional<FString> Nonce;
	TOptional<FString> Gas;
	TOptional<FString> GasPrice;
	TOptional<FString> ChainId;
	TOptional<FString> Encoding;
	TOptional<bool> Eoa;
	TOptional<FString> ContractAddress;
	TOptional<FString> TokenId;
	TOptional<FString> TokenIds;
	TOptional<bool> Approved;
	TOptional<bool> Broadcast;
};

}
