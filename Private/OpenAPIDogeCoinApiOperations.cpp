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

#include "OpenAPIDogeCoinApiOperations.h"

#include "MoonSDKModule.h"
#include "OpenAPIHelpers.h"

#include "Dom/JsonObject.h"
#include "Templates/SharedPointer.h"
#include "HttpModule.h"
#include "PlatformHttp.h"

namespace MoonSDK
{

FString OpenAPIDogeCoinApi::CreateDogeCoinAccountRequest::ComputePath() const
{
	FString Path(TEXT("/dogecoin"));
	return Path;
}

void OpenAPIDogeCoinApi::CreateDogeCoinAccountRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("Authorization"), Authorization);

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Body parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, OpenAPIDogeCoinInput);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogMoonSDK, Error, TEXT("Body parameter (OpenAPIDogeCoinInput) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogMoonSDK, Error, TEXT("Body parameter (OpenAPIDogeCoinInput) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogMoonSDK, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIDogeCoinApi::CreateDogeCoinAccountResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Ok"));
		break;
	}
}

bool OpenAPIDogeCoinApi::CreateDogeCoinAccountResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIDogeCoinApi::GetDogeCoinAccountRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("accountName"), FStringFormatArg(ToUrlString(AccountName)) } };

	FString Path = FString::Format(TEXT("/dogecoin/{accountName}"), PathParams);

	return Path;
}

void OpenAPIDogeCoinApi::GetDogeCoinAccountRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("Authorization"), Authorization);

}

void OpenAPIDogeCoinApi::GetDogeCoinAccountResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Ok"));
		break;
	}
}

bool OpenAPIDogeCoinApi::GetDogeCoinAccountResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIDogeCoinApi::ListDogeCoinAccountsRequest::ComputePath() const
{
	FString Path(TEXT("/dogecoin"));
	return Path;
}

void OpenAPIDogeCoinApi::ListDogeCoinAccountsRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("Authorization"), Authorization);

}

void OpenAPIDogeCoinApi::ListDogeCoinAccountsResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Ok"));
		break;
	}
}

bool OpenAPIDogeCoinApi::ListDogeCoinAccountsResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIDogeCoinApi::SignDogeCoinTransactionRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("accountName"), FStringFormatArg(ToUrlString(AccountName)) } };

	FString Path = FString::Format(TEXT("/dogecoin/{accountName}/sign-tx"), PathParams);

	return Path;
}

void OpenAPIDogeCoinApi::SignDogeCoinTransactionRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("Authorization"), Authorization);

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Body parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, OpenAPIDogeCoinTransactionInput);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogMoonSDK, Error, TEXT("Body parameter (OpenAPIDogeCoinTransactionInput) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogMoonSDK, Error, TEXT("Body parameter (OpenAPIDogeCoinTransactionInput) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogMoonSDK, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIDogeCoinApi::SignDogeCoinTransactionResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Ok"));
		break;
	}
}

bool OpenAPIDogeCoinApi::SignDogeCoinTransactionResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

}
