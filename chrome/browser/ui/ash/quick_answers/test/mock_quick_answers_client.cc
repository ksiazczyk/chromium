// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock Quick Answers client implementation
// summary: Implements the MockQuickAnswersClient constructor and destructor that wrap QuickAnswersClient for use in tests.
// ---

#include "chrome/browser/ui/ash/quick_answers/test/mock_quick_answers_client.h"

#include "services/network/public/cpp/shared_url_loader_factory.h"

namespace quick_answers {

MockQuickAnswersClient::MockQuickAnswersClient(
    scoped_refptr<network::SharedURLLoaderFactory> url_loader_factory,
    QuickAnswersDelegate* quick_answers_delegate)
    : QuickAnswersClient(url_loader_factory, quick_answers_delegate) {}

MockQuickAnswersClient::~MockQuickAnswersClient() = default;

}  // namespace quick_answers
