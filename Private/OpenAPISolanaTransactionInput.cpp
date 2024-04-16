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

#include "OpenAPISolanaTransactionInput.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPISolanaTransactionInput::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (To.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("to")); WriteJsonValue(Writer, To.GetValue());
	}
	if (Value.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("value")); WriteJsonValue(Writer, Value.GetValue());
	}
	if (Network.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("network")); WriteJsonValue(Writer, Network.GetValue());
	}
	if (Compress.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("compress")); WriteJsonValue(Writer, Compress.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPISolanaTransactionInput::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("to"), To);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("value"), Value);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("network"), Network);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("compress"), Compress);

	return ParseSuccess;
}

}
