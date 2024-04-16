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
#include "OpenAPIInputBody.h"
#include "OpenAPILitecoinTransactionOutput.h"

namespace OpenAPI
{

/*
 * OpenAPILitecoinAPIResponse
 *
 * 
 */
class OPENAPI_API OpenAPILitecoinAPIResponse : public Model
{
public:
    virtual ~OpenAPILitecoinAPIResponse() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	bool Success = false;
	FString Message;
	TOptional<OpenAPIInputBody> Body;
	TOptional<FString> Address;
	TOptional<OpenAPILitecoinTransactionOutput> Data;
};

}