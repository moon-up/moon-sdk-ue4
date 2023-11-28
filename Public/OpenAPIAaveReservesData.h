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

#pragma once

#include "OpenAPIBaseModel.h"

namespace OpenAPI
{

/*
 * OpenAPIAaveReservesData
 *
 * 
 */
class OPENAPI_API OpenAPIAaveReservesData : public Model
{
public:
    virtual ~OpenAPIAaveReservesData() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	FString CurrentAtokenBalance;
	FString CurrentBorrowBalance;
	FString PrincipalBorrowBalance;
	FString BorrowRateMode;
	FString BorrowRate;
	FString LiquidityRate;
	FString OriginationFee;
	FString VariableBorrowIndex;
	FString LastUpdateTimestamp;
	FString UsageAsCollateralEnabled;
};

}
