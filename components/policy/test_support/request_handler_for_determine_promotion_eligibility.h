// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Promotion eligibility request handler header
// summary: Declares the RequestHandlerForDeterminePromotionEligibility class and the Chrome Enterprise OAuth token constants used by the test handler.
// ---

#ifndef COMPONENTS_POLICY_TEST_SUPPORT_REQUEST_HANDLER_FOR_DETERMINE_PROMOTION_ELIGIBILITY_H_
#define COMPONENTS_POLICY_TEST_SUPPORT_REQUEST_HANDLER_FOR_DETERMINE_PROMOTION_ELIGIBILITY_H_

#include "components/policy/test_support/embedded_policy_test_server.h"

namespace policy {

extern const char kChromeEnterpriseCoreToken[];
extern const char kChromeEnterprisePremiumToken[];

// Handler for request type `determine_promotion_eligibility`.
class RequestHandlerForDeterminePromotionEligibility
    : public EmbeddedPolicyTestServer::RequestHandler {
 public:
  explicit RequestHandlerForDeterminePromotionEligibility(
      EmbeddedPolicyTestServer* parent);
  RequestHandlerForDeterminePromotionEligibility(
      RequestHandlerForDeterminePromotionEligibility&& handler) = delete;
  RequestHandlerForDeterminePromotionEligibility& operator=(
      RequestHandlerForDeterminePromotionEligibility&& handler) = delete;
  ~RequestHandlerForDeterminePromotionEligibility() override;

  // EmbeddedPolicyTestServer::RequestHandler:
  std::string RequestType() override;
  std::unique_ptr<net::test_server::HttpResponse> HandleRequest(
      const net::test_server::HttpRequest& request) override;
};
}  // namespace policy

#endif  // COMPONENTS_POLICY_TEST_SUPPORT_REQUEST_HANDLER_FOR_DETERMINE_PROMOTION_ELIGIBILITY_H_
