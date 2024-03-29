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
#include "OpenAPIErc20Api.h"

#include "OpenAPIInputBody.h"
#include "OpenAPITransactionAPIResponse.h"

namespace MoonSDK
{

/* 

*/
class MOONSDK_API OpenAPIErc20Api::AllowanceErc20Request : public Request
{
public:
    virtual ~AllowanceErc20Request() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString Name;
	OpenAPIInputBody OpenAPIInputBody;
};

class MOONSDK_API OpenAPIErc20Api::AllowanceErc20Response : public Response
{
public:
    virtual ~AllowanceErc20Response() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionAPIResponse Content;
};

/* 

*/
class MOONSDK_API OpenAPIErc20Api::ApproveErc20Request : public Request
{
public:
    virtual ~ApproveErc20Request() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString Name;
	OpenAPIInputBody OpenAPIInputBody;
};

class MOONSDK_API OpenAPIErc20Api::ApproveErc20Response : public Response
{
public:
    virtual ~ApproveErc20Response() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionAPIResponse Content;
};

/* 

*/
class MOONSDK_API OpenAPIErc20Api::BalanceOfErc20Request : public Request
{
public:
    virtual ~BalanceOfErc20Request() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString Name;
	OpenAPIInputBody OpenAPIInputBody;
};

class MOONSDK_API OpenAPIErc20Api::BalanceOfErc20Response : public Response
{
public:
    virtual ~BalanceOfErc20Response() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionAPIResponse Content;
};

/* 

*/
class MOONSDK_API OpenAPIErc20Api::DecimalsErc20Request : public Request
{
public:
    virtual ~DecimalsErc20Request() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString Name;
	OpenAPIInputBody OpenAPIInputBody;
};

class MOONSDK_API OpenAPIErc20Api::DecimalsErc20Response : public Response
{
public:
    virtual ~DecimalsErc20Response() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionAPIResponse Content;
};

/* 

*/
class MOONSDK_API OpenAPIErc20Api::NameErc20Request : public Request
{
public:
    virtual ~NameErc20Request() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString Name;
	OpenAPIInputBody OpenAPIInputBody;
};

class MOONSDK_API OpenAPIErc20Api::NameErc20Response : public Response
{
public:
    virtual ~NameErc20Response() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionAPIResponse Content;
};

/* 

*/
class MOONSDK_API OpenAPIErc20Api::SymbolErc20Request : public Request
{
public:
    virtual ~SymbolErc20Request() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString Name;
	OpenAPIInputBody OpenAPIInputBody;
};

class MOONSDK_API OpenAPIErc20Api::SymbolErc20Response : public Response
{
public:
    virtual ~SymbolErc20Response() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionAPIResponse Content;
};

/* 

*/
class MOONSDK_API OpenAPIErc20Api::TotalSupplyErc20Request : public Request
{
public:
    virtual ~TotalSupplyErc20Request() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString Name;
	OpenAPIInputBody OpenAPIInputBody;
};

class MOONSDK_API OpenAPIErc20Api::TotalSupplyErc20Response : public Response
{
public:
    virtual ~TotalSupplyErc20Response() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionAPIResponse Content;
};

/* 

*/
class MOONSDK_API OpenAPIErc20Api::TransferErc20Request : public Request
{
public:
    virtual ~TransferErc20Request() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString Name;
	OpenAPIInputBody OpenAPIInputBody;
};

class MOONSDK_API OpenAPIErc20Api::TransferErc20Response : public Response
{
public:
    virtual ~TransferErc20Response() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionAPIResponse Content;
};

/* 

*/
class MOONSDK_API OpenAPIErc20Api::TransferFromErc20Request : public Request
{
public:
    virtual ~TransferFromErc20Request() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString Name;
	OpenAPIInputBody OpenAPIInputBody;
};

class MOONSDK_API OpenAPIErc20Api::TransferFromErc20Response : public Response
{
public:
    virtual ~TransferFromErc20Response() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITransactionAPIResponse Content;
};

}
