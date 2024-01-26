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
 * OpenAPIFiatCurrency
 *
 * 
 */
class MOONSDK_API OpenAPIFiatCurrency : public Model
{
public:
    virtual ~OpenAPIFiatCurrency() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	FString Icon;
	FString Symbol;
	FString Name;
	FString Code;
	FString Id;
};

}
