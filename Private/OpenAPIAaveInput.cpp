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

#include "OpenAPIAaveInput.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIAaveInput::WriteJson(JsonWriter& Writer) const
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
	if (LendingPool.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("lending_pool")); WriteJsonValue(Writer, LendingPool.GetValue());
	}
	if (Amount.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("amount")); WriteJsonValue(Writer, Amount.GetValue());
	}
	if (AtokenToRedeeem.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("atoken_to_redeeem")); WriteJsonValue(Writer, AtokenToRedeeem.GetValue());
	}
	if (RefCode.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("ref_code")); WriteJsonValue(Writer, RefCode.GetValue());
	}
	if (InterestRateMode.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("interest_rate_mode")); WriteJsonValue(Writer, InterestRateMode.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIAaveInput::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
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
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("lending_pool"), LendingPool);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("amount"), Amount);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("atoken_to_redeeem"), AtokenToRedeeem);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("ref_code"), RefCode);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("interest_rate_mode"), InterestRateMode);

	return ParseSuccess;
}

}