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

#include "OpenAPIAaveReservesData.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIAaveReservesData::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("current_atoken_balance")); WriteJsonValue(Writer, CurrentAtokenBalance);
	Writer->WriteIdentifierPrefix(TEXT("current_borrow_balance")); WriteJsonValue(Writer, CurrentBorrowBalance);
	Writer->WriteIdentifierPrefix(TEXT("principal_borrow_balance")); WriteJsonValue(Writer, PrincipalBorrowBalance);
	Writer->WriteIdentifierPrefix(TEXT("borrow_rate_mode")); WriteJsonValue(Writer, BorrowRateMode);
	Writer->WriteIdentifierPrefix(TEXT("borrow_rate")); WriteJsonValue(Writer, BorrowRate);
	Writer->WriteIdentifierPrefix(TEXT("liquidity_rate")); WriteJsonValue(Writer, LiquidityRate);
	Writer->WriteIdentifierPrefix(TEXT("origination_fee")); WriteJsonValue(Writer, OriginationFee);
	Writer->WriteIdentifierPrefix(TEXT("variable_borrow_index")); WriteJsonValue(Writer, VariableBorrowIndex);
	Writer->WriteIdentifierPrefix(TEXT("last_update_timestamp")); WriteJsonValue(Writer, LastUpdateTimestamp);
	Writer->WriteIdentifierPrefix(TEXT("usage_as_collateral_enabled")); WriteJsonValue(Writer, UsageAsCollateralEnabled);
	Writer->WriteObjectEnd();
}

bool OpenAPIAaveReservesData::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("current_atoken_balance"), CurrentAtokenBalance);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("current_borrow_balance"), CurrentBorrowBalance);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("principal_borrow_balance"), PrincipalBorrowBalance);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("borrow_rate_mode"), BorrowRateMode);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("borrow_rate"), BorrowRate);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("liquidity_rate"), LiquidityRate);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("origination_fee"), OriginationFee);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("variable_borrow_index"), VariableBorrowIndex);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("last_update_timestamp"), LastUpdateTimestamp);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("usage_as_collateral_enabled"), UsageAsCollateralEnabled);

	return ParseSuccess;
}

}