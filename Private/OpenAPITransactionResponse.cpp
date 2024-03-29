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

#include "OpenAPITransactionResponse.h"

#include "MoonSDKModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace MoonSDK
{

void OpenAPITransactionResponse::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("message")); WriteJsonValue(Writer, Message);
	Writer->WriteIdentifierPrefix(TEXT("tx")); WriteJsonValue(Writer, Tx);
	Writer->WriteIdentifierPrefix(TEXT("info")); WriteJsonValue(Writer, Info);
	Writer->WriteIdentifierPrefix(TEXT("chainId")); WriteJsonValue(Writer, ChainId);
	Writer->WriteIdentifierPrefix(TEXT("currentBlockNumber")); WriteJsonValue(Writer, CurrentBlockNumber);
	Writer->WriteObjectEnd();
}

bool OpenAPITransactionResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("message"), Message);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("tx"), Tx);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("info"), Info);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("chainId"), ChainId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("currentBlockNumber"), CurrentBlockNumber);

	return ParseSuccess;
}

}
