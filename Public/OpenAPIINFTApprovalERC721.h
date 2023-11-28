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

namespace OpenAPI
{

/*
 * OpenAPIINFTApprovalERC721
 *
 * 
 */
class OPENAPI_API OpenAPIINFTApprovalERC721 : public Model
{
public:
    virtual ~OpenAPIINFTApprovalERC721() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	FString TransactionHash;
	FString Contract;
	FString LogIndex;
	FString Owner;
	FString Approved;
	FString TokenId;
	FString TokenContractType;
	FString TokenName;
	FString TokenSymbol;
};

}
