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

#include "OpenAPIIWebhook.h"

#include "MoonSDKModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace MoonSDK
{

void OpenAPIIWebhook::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("block")); WriteJsonValue(Writer, Block);
	Writer->WriteIdentifierPrefix(TEXT("chainId")); WriteJsonValue(Writer, ChainId);
	Writer->WriteIdentifierPrefix(TEXT("logs")); WriteJsonValue(Writer, Logs);
	Writer->WriteIdentifierPrefix(TEXT("txs")); WriteJsonValue(Writer, Txs);
	Writer->WriteIdentifierPrefix(TEXT("txsInternal")); WriteJsonValue(Writer, TxsInternal);
	Writer->WriteIdentifierPrefix(TEXT("abi")); WriteJsonValue(Writer, Abi);
	Writer->WriteIdentifierPrefix(TEXT("retries")); WriteJsonValue(Writer, Retries);
	Writer->WriteIdentifierPrefix(TEXT("confirmed")); WriteJsonValue(Writer, Confirmed);
	Writer->WriteIdentifierPrefix(TEXT("tag")); WriteJsonValue(Writer, Tag);
	Writer->WriteIdentifierPrefix(TEXT("streamId")); WriteJsonValue(Writer, StreamId);
	Writer->WriteIdentifierPrefix(TEXT("erc20Transfers")); WriteJsonValue(Writer, Erc20Transfers);
	Writer->WriteIdentifierPrefix(TEXT("erc20Approvals")); WriteJsonValue(Writer, Erc20Approvals);
	Writer->WriteIdentifierPrefix(TEXT("nftTransfers")); WriteJsonValue(Writer, NftTransfers);
	Writer->WriteIdentifierPrefix(TEXT("nativeBalances")); WriteJsonValue(Writer, NativeBalances);
	Writer->WriteIdentifierPrefix(TEXT("nftApprovals")); WriteJsonValue(Writer, NftApprovals);
	Writer->WriteIdentifierPrefix(TEXT("nftTokenApprovals")); WriteJsonValue(Writer, NftTokenApprovals);
	Writer->WriteObjectEnd();
}

bool OpenAPIIWebhook::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("block"), Block);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("chainId"), ChainId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("logs"), Logs);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("txs"), Txs);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("txsInternal"), TxsInternal);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("abi"), Abi);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("retries"), Retries);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("confirmed"), Confirmed);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("tag"), Tag);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("streamId"), StreamId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("erc20Transfers"), Erc20Transfers);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("erc20Approvals"), Erc20Approvals);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("nftTransfers"), NftTransfers);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("nativeBalances"), NativeBalances);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("nftApprovals"), NftApprovals);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("nftTokenApprovals"), NftTokenApprovals);

	return ParseSuccess;
}

}
