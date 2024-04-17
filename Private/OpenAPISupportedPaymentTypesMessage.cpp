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

#include "OpenAPISupportedPaymentTypesMessage.h"

#include "MoonSDKModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace MoonSDK
{

void OpenAPISupportedPaymentTypesMessage::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("googlepay")); WriteJsonValue(Writer, Googlepay);
	Writer->WriteIdentifierPrefix(TEXT("applepay")); WriteJsonValue(Writer, Applepay);
	Writer->WriteIdentifierPrefix(TEXT("creditcard")); WriteJsonValue(Writer, Creditcard);
	Writer->WriteObjectEnd();
}

bool OpenAPISupportedPaymentTypesMessage::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("googlepay"), Googlepay);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("applepay"), Applepay);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("creditcard"), Creditcard);

	return ParseSuccess;
}

}
