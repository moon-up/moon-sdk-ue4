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

#include "OpenAPIAccountData.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIAccountData::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Keys.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("keys")); WriteJsonValue(Writer, Keys.GetValue());
	}
	if (Address.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("address")); WriteJsonValue(Writer, Address.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIAccountData::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("keys"), Keys);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("address"), Address);

	return ParseSuccess;
}

}
