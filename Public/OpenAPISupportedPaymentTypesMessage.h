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
#include "OpenAPIPaymentType.h"

namespace OpenAPI
{

/*
 * OpenAPISupportedPaymentTypesMessage
 *
 * 
 */
class OPENAPI_API OpenAPISupportedPaymentTypesMessage : public Model
{
public:
    virtual ~OpenAPISupportedPaymentTypesMessage() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	OpenAPIPaymentType Googlepay;
	OpenAPIPaymentType Applepay;
	OpenAPIPaymentType Creditcard;
};

}
