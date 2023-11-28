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
#include "OpenAPIErc721Api.h"

#include "OpenAPIAccountControllerResponse.h"
#include "OpenAPIErc721Request.h"

namespace OpenAPI
{

/* 

*/
class OPENAPI_API OpenAPIErc721Api::ApproveRequest : public Request
{
public:
    virtual ~ApproveRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString Name;
	OpenAPIErc721Request OpenAPIErc721Request;
};

class OPENAPI_API OpenAPIErc721Api::ApproveResponse : public Response
{
public:
    virtual ~ApproveResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIErc721Api::BalanceOfRequest : public Request
{
public:
    virtual ~BalanceOfRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString Name;
	OpenAPIErc721Request OpenAPIErc721Request;
};

class OPENAPI_API OpenAPIErc721Api::BalanceOfResponse : public Response
{
public:
    virtual ~BalanceOfResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIErc721Api::GetApprovedRequest : public Request
{
public:
    virtual ~GetApprovedRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString Name;
	OpenAPIErc721Request OpenAPIErc721Request;
};

class OPENAPI_API OpenAPIErc721Api::GetApprovedResponse : public Response
{
public:
    virtual ~GetApprovedResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIErc721Api::IsApprovedForAllRequest : public Request
{
public:
    virtual ~IsApprovedForAllRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString Name;
	OpenAPIErc721Request OpenAPIErc721Request;
};

class OPENAPI_API OpenAPIErc721Api::IsApprovedForAllResponse : public Response
{
public:
    virtual ~IsApprovedForAllResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIErc721Api::NameRequest : public Request
{
public:
    virtual ~NameRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString Name;
	OpenAPIErc721Request OpenAPIErc721Request;
};

class OPENAPI_API OpenAPIErc721Api::NameResponse : public Response
{
public:
    virtual ~NameResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIErc721Api::OwnerOfRequest : public Request
{
public:
    virtual ~OwnerOfRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString Name;
	OpenAPIErc721Request OpenAPIErc721Request;
};

class OPENAPI_API OpenAPIErc721Api::OwnerOfResponse : public Response
{
public:
    virtual ~OwnerOfResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIErc721Api::SafeTransferFromRequest : public Request
{
public:
    virtual ~SafeTransferFromRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString Name;
	OpenAPIErc721Request OpenAPIErc721Request;
};

class OPENAPI_API OpenAPIErc721Api::SafeTransferFromResponse : public Response
{
public:
    virtual ~SafeTransferFromResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIErc721Api::SetApprovalForAllRequest : public Request
{
public:
    virtual ~SetApprovalForAllRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString Name;
	OpenAPIErc721Request OpenAPIErc721Request;
};

class OPENAPI_API OpenAPIErc721Api::SetApprovalForAllResponse : public Response
{
public:
    virtual ~SetApprovalForAllResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIErc721Api::SymbolRequest : public Request
{
public:
    virtual ~SymbolRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString Name;
	OpenAPIErc721Request OpenAPIErc721Request;
};

class OPENAPI_API OpenAPIErc721Api::SymbolResponse : public Response
{
public:
    virtual ~SymbolResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIErc721Api::TokenUriRequest : public Request
{
public:
    virtual ~TokenUriRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString Name;
	OpenAPIErc721Request OpenAPIErc721Request;
};

class OPENAPI_API OpenAPIErc721Api::TokenUriResponse : public Response
{
public:
    virtual ~TokenUriResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIErc721Api::TransferRequest : public Request
{
public:
    virtual ~TransferRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString Name;
	OpenAPIErc721Request OpenAPIErc721Request;
};

class OPENAPI_API OpenAPIErc721Api::TransferResponse : public Response
{
public:
    virtual ~TransferResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIErc721Api::TransferFromRequest : public Request
{
public:
    virtual ~TransferFromRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Authorization;
	FString Name;
	OpenAPIErc721Request OpenAPIErc721Request;
};

class OPENAPI_API OpenAPIErc721Api::TransferFromResponse : public Response
{
public:
    virtual ~TransferFromResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

}
