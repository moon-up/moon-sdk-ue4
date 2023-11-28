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

#include "OpenAPIInternalTransaction.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIInternalTransaction::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("from")); WriteJsonValue(Writer, From);
	Writer->WriteIdentifierPrefix(TEXT("to")); WriteJsonValue(Writer, To);
	Writer->WriteIdentifierPrefix(TEXT("value")); WriteJsonValue(Writer, Value);
	Writer->WriteIdentifierPrefix(TEXT("transactionHash")); WriteJsonValue(Writer, TransactionHash);
	Writer->WriteIdentifierPrefix(TEXT("gas")); WriteJsonValue(Writer, Gas);
	Writer->WriteObjectEnd();
}

bool OpenAPIInternalTransaction::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("from"), From);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("to"), To);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("value"), Value);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("transactionHash"), TransactionHash);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("gas"), Gas);

	return ParseSuccess;
}

}