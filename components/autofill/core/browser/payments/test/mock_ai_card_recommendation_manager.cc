// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock AI card recommendation manager implementation
// summary: Implements the constructor and destructor of the mock AI card recommendation manager used in place of the real manager during tests.
// ---

#include "components/autofill/core/browser/payments/test/mock_ai_card_recommendation_manager.h"

namespace autofill {

MockAiCardRecommendationManager::MockAiCardRecommendationManager(
    BrowserAutofillManager* browser_autofill_manager)
    : payments::AiCardRecommendationManager(browser_autofill_manager) {}

MockAiCardRecommendationManager::~MockAiCardRecommendationManager() = default;

}  // namespace autofill
