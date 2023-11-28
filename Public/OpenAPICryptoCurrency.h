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
 * OpenAPICryptoCurrency
 *
 * 
 */
class OPENAPI_API OpenAPICryptoCurrency : public Model
{
public:
    virtual ~OpenAPICryptoCurrency() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	FString NetworkDisplayName;
	FString Icon;
	double ChainId = 0.0;
	FString Address;
	double Decimals = 0.0;
	FString Network;
	FString Symbol;
	FString Name;
	FString Code;
	FString Id;
};

}