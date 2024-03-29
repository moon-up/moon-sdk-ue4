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

#include "OpenAPIINFTApprovalERC1155.h"

#include "MoonSDKModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace MoonSDK
{

void OpenAPIINFTApprovalERC1155::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("transactionHash")); WriteJsonValue(Writer, TransactionHash);
	Writer->WriteIdentifierPrefix(TEXT("contract")); WriteJsonValue(Writer, Contract);
	Writer->WriteIdentifierPrefix(TEXT("logIndex")); WriteJsonValue(Writer, LogIndex);
	Writer->WriteIdentifierPrefix(TEXT("account")); WriteJsonValue(Writer, Account);
	Writer->WriteIdentifierPrefix(TEXT("operator")); WriteJsonValue(Writer, _Operator);
	Writer->WriteIdentifierPrefix(TEXT("approved")); WriteJsonValue(Writer, Approved);
	Writer->WriteIdentifierPrefix(TEXT("tokenContractType")); WriteJsonValue(Writer, TokenContractType);
	Writer->WriteIdentifierPrefix(TEXT("tokenName")); WriteJsonValue(Writer, TokenName);
	Writer->WriteIdentifierPrefix(TEXT("tokenSymbol")); WriteJsonValue(Writer, TokenSymbol);
	Writer->WriteObjectEnd();
}

bool OpenAPIINFTApprovalERC1155::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("transactionHash"), TransactionHash);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("contract"), Contract);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("logIndex"), LogIndex);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("account"), Account);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("operator"), _Operator);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("approved"), Approved);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("tokenContractType"), TokenContractType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("tokenName"), TokenName);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("tokenSymbol"), TokenSymbol);

	return ParseSuccess;
}

}
