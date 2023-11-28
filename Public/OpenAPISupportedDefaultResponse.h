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
#include "OpenAPISupportedDefaultResponseDefaults.h"
#include "OpenAPISupportedDefaultResponseDefaultsId.h"

namespace OpenAPI
{

/*
 * OpenAPISupportedDefaultResponse
 *
 * 
 */
class OPENAPI_API OpenAPISupportedDefaultResponse : public Model
{
public:
    virtual ~OpenAPISupportedDefaultResponse() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	OpenAPISupportedDefaultResponseDefaults Defaults;
	OpenAPISupportedDefaultResponseDefaultsId Recommended;
};

}