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
 * OpenAPIINFTApprovalERC1155
 *
 * 
 */
class MOONSDK_API OpenAPIINFTApprovalERC1155 : public Model
{
public:
    virtual ~OpenAPIINFTApprovalERC1155() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	FString TransactionHash;
	FString Contract;
	FString LogIndex;
	FString Account;
	FString _Operator;
	bool Approved = false;
	FString TokenContractType;
	FString TokenName;
	FString TokenSymbol;
};

}
