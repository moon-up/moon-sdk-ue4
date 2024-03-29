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

#include "OpenAPIAbiOutput.h"

#include "MoonSDKModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace MoonSDK
{

void OpenAPIAbiOutput::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("name")); WriteJsonValue(Writer, Name);
	Writer->WriteIdentifierPrefix(TEXT("type")); WriteJsonValue(Writer, Type);
	if (Components.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("components")); WriteJsonValue(Writer, Components.GetValue());
	}
	if (InternalType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("internalType")); WriteJsonValue(Writer, InternalType.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIAbiOutput::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("name"), Name);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("type"), Type);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("components"), Components);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("internalType"), InternalType);

	return ParseSuccess;
}

}
