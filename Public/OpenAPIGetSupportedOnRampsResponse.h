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
#include "OpenAPIGetSupportedOnRampsResponseMessageInner.h"

namespace MoonSDK
{

/*
 * OpenAPIGetSupportedOnRampsResponse
 *
 * 
 */
class MOONSDK_API OpenAPIGetSupportedOnRampsResponse : public Model
{
public:
    virtual ~OpenAPIGetSupportedOnRampsResponse() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TArray<OpenAPIGetSupportedOnRampsResponseMessageInner> Message;
};

}
