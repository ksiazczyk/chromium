// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock Chrome compose client implementation
// summary: Implements MockChromeComposeClient, a test double standing in for ChromeComposeClient in Compose tests.
// ---

#include "chrome/browser/compose/mock_chrome_compose_client.h"

MockChromeComposeClient::MockChromeComposeClient(
    content::WebContents* web_contents)
    : ChromeComposeClient(web_contents) {}

MockChromeComposeClient::~MockChromeComposeClient() = default;
