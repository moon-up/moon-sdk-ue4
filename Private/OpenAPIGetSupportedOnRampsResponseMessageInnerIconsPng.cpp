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

#include "OpenAPIGetSupportedOnRampsResponseMessageInnerIconsPng.h"

#include "MoonSDKModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace MoonSDK
{

void OpenAPIGetSupportedOnRampsResponseMessageInnerIconsPng::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("160x160")); WriteJsonValue(Writer, _160x160);
	Writer->WriteIdentifierPrefix(TEXT("32x32")); WriteJsonValue(Writer, _32x32);
	Writer->WriteObjectEnd();
}

bool OpenAPIGetSupportedOnRampsResponseMessageInnerIconsPng::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("160x160"), _160x160);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("32x32"), _32x32);

	return ParseSuccess;
}

}
