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

#include "OpenAPICreateAccountInput.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPICreateAccountInput::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (PrivateKey.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("private_key")); WriteJsonValue(Writer, PrivateKey.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPICreateAccountInput::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("private_key"), PrivateKey);

	return ParseSuccess;
}

}
