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
#include "OpenAPIERC1155Api.h"

#include "OpenAPIAccountControllerResponse.h"
#include "OpenAPIErc1155Request.h"

namespace OpenAPI
{

/* 

*/
class OPENAPI_API OpenAPIERC1155Api::BalanceOfRequest : public Request
{
public:
    virtual ~BalanceOfRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Name;
	FString Authorization;
	OpenAPIErc1155Request OpenAPIErc1155Request;
};

class OPENAPI_API OpenAPIERC1155Api::BalanceOfResponse : public Response
{
public:
    virtual ~BalanceOfResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIERC1155Api::BalanceOfBatchRequest : public Request
{
public:
    virtual ~BalanceOfBatchRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Name;
	FString Authorization;
	OpenAPIErc1155Request OpenAPIErc1155Request;
};

class OPENAPI_API OpenAPIERC1155Api::BalanceOfBatchResponse : public Response
{
public:
    virtual ~BalanceOfBatchResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIERC1155Api::IsApprovedForAllRequest : public Request
{
public:
    virtual ~IsApprovedForAllRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Name;
	FString Authorization;
	OpenAPIErc1155Request OpenAPIErc1155Request;
};

class OPENAPI_API OpenAPIERC1155Api::IsApprovedForAllResponse : public Response
{
public:
    virtual ~IsApprovedForAllResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIERC1155Api::SafeBatchTransferFromRequest : public Request
{
public:
    virtual ~SafeBatchTransferFromRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Name;
	FString Authorization;
	OpenAPIErc1155Request OpenAPIErc1155Request;
};

class OPENAPI_API OpenAPIERC1155Api::SafeBatchTransferFromResponse : public Response
{
public:
    virtual ~SafeBatchTransferFromResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIERC1155Api::SafeTransferFromRequest : public Request
{
public:
    virtual ~SafeTransferFromRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Name;
	FString Authorization;
	OpenAPIErc1155Request OpenAPIErc1155Request;
};

class OPENAPI_API OpenAPIERC1155Api::SafeTransferFromResponse : public Response
{
public:
    virtual ~SafeTransferFromResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

/* 

*/
class OPENAPI_API OpenAPIERC1155Api::SetApprovalForAllRequest : public Request
{
public:
    virtual ~SetApprovalForAllRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	FString Name;
	FString Authorization;
	OpenAPIErc1155Request OpenAPIErc1155Request;
};

class OPENAPI_API OpenAPIERC1155Api::SetApprovalForAllResponse : public Response
{
public:
    virtual ~SetApprovalForAllResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAccountControllerResponse Content;
};

}
