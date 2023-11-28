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

#include "OpenAPITransactionRequest.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPITransactionRequest::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Nonce.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("nonce")); WriteJsonValue(Writer, Nonce.GetValue());
	}
	if (Data.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("data")); WriteJsonValue(Writer, Data.GetValue());
	}
	if (Value.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("value")); WriteJsonValue(Writer, Value.GetValue());
	}
	if (To.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("to")); WriteJsonValue(Writer, To.GetValue());
	}
	if (From.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("from")); WriteJsonValue(Writer, From.GetValue());
	}
	if (MaxFeePerGas.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("maxFeePerGas")); WriteJsonValue(Writer, MaxFeePerGas.GetValue());
	}
	if (MaxPriorityFeePerGas.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("maxPriorityFeePerGas")); WriteJsonValue(Writer, MaxPriorityFeePerGas.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPITransactionRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("nonce"), Nonce);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("data"), Data);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("value"), Value);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("to"), To);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("from"), From);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("maxFeePerGas"), MaxFeePerGas);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("maxPriorityFeePerGas"), MaxPriorityFeePerGas);

	return ParseSuccess;
}

}