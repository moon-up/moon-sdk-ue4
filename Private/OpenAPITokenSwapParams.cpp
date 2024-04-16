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

#include "OpenAPITokenSwapParams.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPITokenSwapParams::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (To.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("to")); WriteJsonValue(Writer, To.GetValue());
	}
	if (Data.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("data")); WriteJsonValue(Writer, Data.GetValue());
	}
	if (Input.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("input")); WriteJsonValue(Writer, Input.GetValue());
	}
	if (Value.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("value")); WriteJsonValue(Writer, Value.GetValue());
	}
	if (Nonce.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("nonce")); WriteJsonValue(Writer, Nonce.GetValue());
	}
	if (Gas.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("gas")); WriteJsonValue(Writer, Gas.GetValue());
	}
	if (GasPrice.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("gasPrice")); WriteJsonValue(Writer, GasPrice.GetValue());
	}
	if (ChainId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("chain_id")); WriteJsonValue(Writer, ChainId.GetValue());
	}
	if (Encoding.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("encoding")); WriteJsonValue(Writer, Encoding.GetValue());
	}
	if (Eoa.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("EOA")); WriteJsonValue(Writer, Eoa.GetValue());
	}
	if (ContractAddress.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("contract_address")); WriteJsonValue(Writer, ContractAddress.GetValue());
	}
	if (TokenId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("token_id")); WriteJsonValue(Writer, TokenId.GetValue());
	}
	if (TokenIds.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("token_ids")); WriteJsonValue(Writer, TokenIds.GetValue());
	}
	if (Approved.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("approved")); WriteJsonValue(Writer, Approved.GetValue());
	}
	if (Broadcast.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("broadcast")); WriteJsonValue(Writer, Broadcast.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("tokenIn")); WriteJsonValue(Writer, TokenIn);
	Writer->WriteIdentifierPrefix(TEXT("tokenOut")); WriteJsonValue(Writer, TokenOut);
	Writer->WriteIdentifierPrefix(TEXT("tokenInDecimals")); WriteJsonValue(Writer, TokenInDecimals);
	Writer->WriteIdentifierPrefix(TEXT("tokenOutDecimals")); WriteJsonValue(Writer, TokenOutDecimals);
	Writer->WriteIdentifierPrefix(TEXT("amountIn")); WriteJsonValue(Writer, AmountIn);
	Writer->WriteIdentifierPrefix(TEXT("slippage")); WriteJsonValue(Writer, Slippage);
	Writer->WriteIdentifierPrefix(TEXT("recipient")); WriteJsonValue(Writer, Recipient);
	Writer->WriteIdentifierPrefix(TEXT("referrer")); WriteJsonValue(Writer, Referrer);
	Writer->WriteObjectEnd();
}

bool OpenAPITokenSwapParams::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("to"), To);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("data"), Data);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("input"), Input);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("value"), Value);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("nonce"), Nonce);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("gas"), Gas);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("gasPrice"), GasPrice);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("chain_id"), ChainId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("encoding"), Encoding);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("EOA"), Eoa);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("contract_address"), ContractAddress);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("token_id"), TokenId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("token_ids"), TokenIds);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("approved"), Approved);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("broadcast"), Broadcast);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("tokenIn"), TokenIn);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("tokenOut"), TokenOut);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("tokenInDecimals"), TokenInDecimals);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("tokenOutDecimals"), TokenOutDecimals);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("amountIn"), AmountIn);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("slippage"), Slippage);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("recipient"), Recipient);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("referrer"), Referrer);

	return ParseSuccess;
}

}
