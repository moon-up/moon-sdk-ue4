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

#include "OpenAPISignMessage.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPISignMessage::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Name.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("name")); WriteJsonValue(Writer, Name.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("data")); WriteJsonValue(Writer, Data);
	if (Encoding.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("encoding")); WriteJsonValue(Writer, Encoding.GetValue());
	}
	if (Header.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("header")); WriteJsonValue(Writer, Header.GetValue());
	}
	if (Signtype.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("signtype")); WriteJsonValue(Writer, Signtype.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPISignMessage::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("name"), Name);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("data"), Data);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("encoding"), Encoding);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("header"), Header);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("signtype"), Signtype);

	return ParseSuccess;
}

}