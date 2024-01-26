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

#include "OpenAPICreatePaymentIntentInput.h"

#include "MoonSDKModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace MoonSDK
{

void OpenAPICreatePaymentIntentInput::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Config.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("config")); WriteJsonValue(Writer, Config.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("metadata")); WriteJsonValue(Writer, Metadata);
	if (Network.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("network")); WriteJsonValue(Writer, Network.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("amount")); WriteJsonValue(Writer, Amount);
	if (Currency.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("currency")); WriteJsonValue(Writer, Currency.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPICreatePaymentIntentInput::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("config"), Config);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("metadata"), Metadata);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("network"), Network);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("amount"), Amount);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("currency"), Currency);

	return ParseSuccess;
}

}
