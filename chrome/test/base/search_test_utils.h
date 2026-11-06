// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Search test utilities for TemplateURLService loading
// summary: Declares a helper that blocks until the TemplateURLService finishes loading during tests.
// ---

#ifndef CHROME_TEST_BASE_SEARCH_TEST_UTILS_H_
#define CHROME_TEST_BASE_SEARCH_TEST_UTILS_H_

class TemplateURLService;

namespace search_test_utils {

// Blocks until |service| finishes loading.
void WaitForTemplateURLServiceToLoad(TemplateURLService* service);

}  // namespace search_test_utils

#endif  // CHROME_TEST_BASE_SEARCH_TEST_UTILS_H_
