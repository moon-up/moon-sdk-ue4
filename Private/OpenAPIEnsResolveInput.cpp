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

#include "OpenAPIEnsResolveInput.h"

#include "MoonSDKModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace MoonSDK
{

void OpenAPIEnsResolveInput::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("domain")); WriteJsonValue(Writer, Domain);
	Writer->WriteIdentifierPrefix(TEXT("chain_id")); WriteJsonValue(Writer, ChainId);
	Writer->WriteObjectEnd();
}

bool OpenAPIEnsResolveInput::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("domain"), Domain);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("chain_id"), ChainId);

	return ParseSuccess;
}

}
