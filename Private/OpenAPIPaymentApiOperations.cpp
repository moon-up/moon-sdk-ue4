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

#include "OpenAPIPaymentApiOperations.h"

#include "MoonSDKModule.h"
#include "OpenAPIHelpers.h"

#include "Dom/JsonObject.h"
#include "Templates/SharedPointer.h"
#include "HttpModule.h"
#include "PlatformHttp.h"

namespace MoonSDK
{

FString OpenAPIPaymentApi::CreatePaymentIntentConfigRequest::ComputePath() const
{
	FString Path(TEXT("/payment/config"));
	return Path;
}

void OpenAPIPaymentApi::CreatePaymentIntentConfigRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
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

		WriteJsonValue(Writer, Body);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogMoonSDK, Error, TEXT("Body parameter (body) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogMoonSDK, Error, TEXT("Body parameter (body) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogMoonSDK, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIPaymentApi::CreatePaymentIntentConfigResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Ok"));
		break;
	}
}

bool OpenAPIPaymentApi::CreatePaymentIntentConfigResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIPaymentApi::DeletePaymentIntentConfigRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("id"), FStringFormatArg(ToUrlString(Id)) } };

	FString Path = FString::Format(TEXT("/payment/config/{id}"), PathParams);

	return Path;
}

void OpenAPIPaymentApi::DeletePaymentIntentConfigRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("DELETE"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("Authorization"), Authorization);

}

void OpenAPIPaymentApi::DeletePaymentIntentConfigResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Ok"));
		break;
	}
}

bool OpenAPIPaymentApi::DeletePaymentIntentConfigResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIPaymentApi::GetAllPaymentIntentConfigsRequest::ComputePath() const
{
	FString Path(TEXT("/payment/config"));
	return Path;
}

void OpenAPIPaymentApi::GetAllPaymentIntentConfigsRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("Authorization"), Authorization);

}

void OpenAPIPaymentApi::GetAllPaymentIntentConfigsResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Ok"));
		break;
	}
}

bool OpenAPIPaymentApi::GetAllPaymentIntentConfigsResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIPaymentApi::GetOnePaymentIntentConfigsRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("id"), FStringFormatArg(ToUrlString(Id)) } };

	FString Path = FString::Format(TEXT("/payment/config/{id}"), PathParams);

	return Path;
}

void OpenAPIPaymentApi::GetOnePaymentIntentConfigsRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("Authorization"), Authorization);

}

void OpenAPIPaymentApi::GetOnePaymentIntentConfigsResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Ok"));
		break;
	}
}

bool OpenAPIPaymentApi::GetOnePaymentIntentConfigsResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIPaymentApi::MoralisWebhookRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("id"), FStringFormatArg(ToUrlString(Id)) } };

	FString Path = FString::Format(TEXT("/payment/webhook/{id}"), PathParams);

	return Path;
}

void OpenAPIPaymentApi::MoralisWebhookRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Body parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, OpenAPIIWebhook);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogMoonSDK, Error, TEXT("Body parameter (OpenAPIIWebhook) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogMoonSDK, Error, TEXT("Body parameter (OpenAPIIWebhook) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogMoonSDK, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIPaymentApi::MoralisWebhookResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Ok"));
		break;
	}
}

bool OpenAPIPaymentApi::MoralisWebhookResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIPaymentApi::PaymentCreatePaymentIntentRequest::ComputePath() const
{
	FString Path(TEXT("/payment"));
	return Path;
}

void OpenAPIPaymentApi::PaymentCreatePaymentIntentRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
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

		WriteJsonValue(Writer, OpenAPICreatePaymentIntentInput);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogMoonSDK, Error, TEXT("Body parameter (OpenAPICreatePaymentIntentInput) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogMoonSDK, Error, TEXT("Body parameter (OpenAPICreatePaymentIntentInput) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogMoonSDK, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIPaymentApi::PaymentCreatePaymentIntentResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Ok"));
		break;
	}
}

bool OpenAPIPaymentApi::PaymentCreatePaymentIntentResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIPaymentApi::PaymentDeletePaymentIntentRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("id"), FStringFormatArg(ToUrlString(Id)) } };

	FString Path = FString::Format(TEXT("/payment/{id}"), PathParams);

	return Path;
}

void OpenAPIPaymentApi::PaymentDeletePaymentIntentRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("DELETE"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("Authorization"), Authorization);

}

void OpenAPIPaymentApi::PaymentDeletePaymentIntentResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Ok"));
		break;
	}
}

bool OpenAPIPaymentApi::PaymentDeletePaymentIntentResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIPaymentApi::PaymentGetAllPaymentIntentsRequest::ComputePath() const
{
	FString Path(TEXT("/payment"));
	return Path;
}

void OpenAPIPaymentApi::PaymentGetAllPaymentIntentsRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("Authorization"), Authorization);

}

void OpenAPIPaymentApi::PaymentGetAllPaymentIntentsResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Ok"));
		break;
	}
}

bool OpenAPIPaymentApi::PaymentGetAllPaymentIntentsResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIPaymentApi::PaymentGetAvailableChainsRequest::ComputePath() const
{
	FString Path(TEXT("/payment/chains"));
	return Path;
}

void OpenAPIPaymentApi::PaymentGetAvailableChainsRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

}

void OpenAPIPaymentApi::PaymentGetAvailableChainsResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Ok"));
		break;
	}
}

bool OpenAPIPaymentApi::PaymentGetAvailableChainsResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIPaymentApi::PaymentGetPaymentIntentRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("id"), FStringFormatArg(ToUrlString(Id)) } };

	FString Path = FString::Format(TEXT("/payment/{id}"), PathParams);

	return Path;
}

void OpenAPIPaymentApi::PaymentGetPaymentIntentRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = {  };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("GET"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("Authorization"), Authorization);

}

void OpenAPIPaymentApi::PaymentGetPaymentIntentResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Ok"));
		break;
	}
}

bool OpenAPIPaymentApi::PaymentGetPaymentIntentResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIPaymentApi::PaymentUpdatePaymentIntentRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("id"), FStringFormatArg(ToUrlString(Id)) } };

	FString Path = FString::Format(TEXT("/payment/{id}"), PathParams);

	return Path;
}

void OpenAPIPaymentApi::PaymentUpdatePaymentIntentRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("PUT"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("Authorization"), Authorization);

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Body parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, OpenAPICreatePaymentIntentInput);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogMoonSDK, Error, TEXT("Body parameter (OpenAPICreatePaymentIntentInput) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogMoonSDK, Error, TEXT("Body parameter (OpenAPICreatePaymentIntentInput) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogMoonSDK, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIPaymentApi::PaymentUpdatePaymentIntentResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Ok"));
		break;
	}
}

bool OpenAPIPaymentApi::PaymentUpdatePaymentIntentResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIPaymentApi::TatumWebhookRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("id"), FStringFormatArg(ToUrlString(Id)) } };

	FString Path = FString::Format(TEXT("/payment/webhook/tatum/{id}"), PathParams);

	return Path;
}

void OpenAPIPaymentApi::TatumWebhookRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("POST"));

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Body parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, OpenAPITatumTransactionEvent);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogMoonSDK, Error, TEXT("Body parameter (OpenAPITatumTransactionEvent) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogMoonSDK, Error, TEXT("Body parameter (OpenAPITatumTransactionEvent) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogMoonSDK, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIPaymentApi::TatumWebhookResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Ok"));
		break;
	}
}

bool OpenAPIPaymentApi::TatumWebhookResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

FString OpenAPIPaymentApi::UpdatePaymentIntentConfigRequest::ComputePath() const
{
	TMap<FString, FStringFormatArg> PathParams = { 
	{ TEXT("id"), FStringFormatArg(ToUrlString(Id)) } };

	FString Path = FString::Format(TEXT("/payment/config/{id}"), PathParams);

	return Path;
}

void OpenAPIPaymentApi::UpdatePaymentIntentConfigRequest::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
	static const TArray<FString> Consumes = { TEXT("application/json") };
	//static const TArray<FString> Produces = { TEXT("application/json") };

	HttpRequest->SetVerb(TEXT("PUT"));

	// Header parameters
	HttpRequest->SetHeader(TEXT("Authorization"), Authorization);

	// Default to Json Body request
	if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json")))
	{
		// Body parameters
		FString JsonBody;
		JsonWriter Writer = TJsonWriterFactory<>::Create(&JsonBody);

		WriteJsonValue(Writer, Body);
		Writer->Close();

		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
		HttpRequest->SetContentAsString(JsonBody);
	}
	else if (Consumes.Contains(TEXT("multipart/form-data")))
	{
		UE_LOG(LogMoonSDK, Error, TEXT("Body parameter (body) was ignored, not supported in multipart form"));
	}
	else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
	{
		UE_LOG(LogMoonSDK, Error, TEXT("Body parameter (body) was ignored, not supported in urlencoded requests"));
	}
	else
	{
		UE_LOG(LogMoonSDK, Error, TEXT("Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
	}
}

void OpenAPIPaymentApi::UpdatePaymentIntentConfigResponse::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
	Response::SetHttpResponseCode(InHttpResponseCode);
	switch ((int)InHttpResponseCode)
	{
	case 200:
		SetResponseString(TEXT("Ok"));
		break;
	}
}

bool OpenAPIPaymentApi::UpdatePaymentIntentConfigResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Content);
}

}
