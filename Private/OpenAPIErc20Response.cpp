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

#include "OpenAPIErc20Response.h"

#include "MoonSDKModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace MoonSDK
{

void OpenAPIErc20Response::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Type.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("type")); WriteJsonValue(Writer, Type.GetValue());
	}
	if (ChainId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("chain_id")); WriteJsonValue(Writer, ChainId.GetValue());
	}
	if (Data.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("data")); WriteJsonValue(Writer, Data.GetValue());
	}
	if (Gas.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("gas")); WriteJsonValue(Writer, Gas.GetValue());
	}
	if (GasPrice.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("gas_price")); WriteJsonValue(Writer, GasPrice.GetValue());
	}
	if (GasTipCap.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("gas_tip_cap")); WriteJsonValue(Writer, GasTipCap.GetValue());
	}
	if (GasFeeCap.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("gas_fee_cap")); WriteJsonValue(Writer, GasFeeCap.GetValue());
	}
	if (Value.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("value")); WriteJsonValue(Writer, Value.GetValue());
	}
	if (Nonce.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("nonce")); WriteJsonValue(Writer, Nonce.GetValue());
	}
	if (From.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("from")); WriteJsonValue(Writer, From.GetValue());
	}
	if (To.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("to")); WriteJsonValue(Writer, To.GetValue());
	}
	if (BlobGas.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("blob_gas")); WriteJsonValue(Writer, BlobGas.GetValue());
	}
	if (BlobGasFeeCap.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("blob_gas_fee_cap")); WriteJsonValue(Writer, BlobGasFeeCap.GetValue());
	}
	if (BlobHashes.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("blob_hashes")); WriteJsonValue(Writer, BlobHashes.GetValue());
	}
	if (V.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("v")); WriteJsonValue(Writer, V.GetValue());
	}
	if (R.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("r")); WriteJsonValue(Writer, R.GetValue());
	}
	if (S.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("s")); WriteJsonValue(Writer, S.GetValue());
	}
	if (Name.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("name")); WriteJsonValue(Writer, Name.GetValue());
	}
	if (Symbol.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("symbol")); WriteJsonValue(Writer, Symbol.GetValue());
	}
	if (Decimals.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("decimals")); WriteJsonValue(Writer, Decimals.GetValue());
	}
	if (TotalSupply.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("totalSupply")); WriteJsonValue(Writer, TotalSupply.GetValue());
	}
	if (ContractAddress.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("contract_address")); WriteJsonValue(Writer, ContractAddress.GetValue());
	}
	if (BalanceOf.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("balanceOf")); WriteJsonValue(Writer, BalanceOf.GetValue());
	}
	if (Allowance.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("allowance")); WriteJsonValue(Writer, Allowance.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIErc20Response::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("type"), Type);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("chain_id"), ChainId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("data"), Data);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("gas"), Gas);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("gas_price"), GasPrice);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("gas_tip_cap"), GasTipCap);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("gas_fee_cap"), GasFeeCap);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("value"), Value);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("nonce"), Nonce);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("from"), From);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("to"), To);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("blob_gas"), BlobGas);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("blob_gas_fee_cap"), BlobGasFeeCap);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("blob_hashes"), BlobHashes);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("v"), V);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("r"), R);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("s"), S);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("name"), Name);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("symbol"), Symbol);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("decimals"), Decimals);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("totalSupply"), TotalSupply);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("contract_address"), ContractAddress);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("balanceOf"), BalanceOf);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("allowance"), Allowance);

	return ParseSuccess;
}

}
