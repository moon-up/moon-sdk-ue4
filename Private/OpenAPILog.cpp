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

#include "OpenAPILog.h"

#include "MoonSDKModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace MoonSDK
{

void OpenAPILog::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Triggers.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("triggers")); WriteJsonValue(Writer, Triggers.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("logIndex")); WriteJsonValue(Writer, LogIndex);
	Writer->WriteIdentifierPrefix(TEXT("transactionHash")); WriteJsonValue(Writer, TransactionHash);
	Writer->WriteIdentifierPrefix(TEXT("address")); WriteJsonValue(Writer, Address);
	Writer->WriteIdentifierPrefix(TEXT("data")); WriteJsonValue(Writer, Data);
	Writer->WriteIdentifierPrefix(TEXT("topic0")); WriteJsonValue(Writer, Topic0);
	Writer->WriteIdentifierPrefix(TEXT("topic1")); WriteJsonValue(Writer, Topic1);
	Writer->WriteIdentifierPrefix(TEXT("topic2")); WriteJsonValue(Writer, Topic2);
	Writer->WriteIdentifierPrefix(TEXT("topic3")); WriteJsonValue(Writer, Topic3);
	Writer->WriteObjectEnd();
}

bool OpenAPILog::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("triggers"), Triggers);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("logIndex"), LogIndex);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("transactionHash"), TransactionHash);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("address"), Address);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("data"), Data);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("topic0"), Topic0);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("topic1"), Topic1);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("topic2"), Topic2);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("topic3"), Topic3);

	return ParseSuccess;
}

}
