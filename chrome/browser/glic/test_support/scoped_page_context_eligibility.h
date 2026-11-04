// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Scoped page context eligibility stub declaration
// summary: Declares a scoped helper that stubs optimization guide page context eligibility so tests can exercise eligibility paths without the real library.
// ---

#ifndef CHROME_BROWSER_GLIC_TEST_SUPPORT_SCOPED_PAGE_CONTEXT_ELIGIBILITY_H_
#define CHROME_BROWSER_GLIC_TEST_SUPPORT_SCOPED_PAGE_CONTEXT_ELIGIBILITY_H_

namespace glic {

// Installs a stub `optimization_guide::PageContextEligibility` implementation
// for the lifetime of this object, so tests can exercise eligibility paths
// without the real (downloaded) library. URLs whose host or path contains
// "ineligible" are reported as ineligible; everything else is eligible.
class ScopedPageContextEligibilityForTesting {
 public:
  ScopedPageContextEligibilityForTesting();
  ScopedPageContextEligibilityForTesting(
      const ScopedPageContextEligibilityForTesting&) = delete;
  ScopedPageContextEligibilityForTesting& operator=(
      const ScopedPageContextEligibilityForTesting&) = delete;
  ~ScopedPageContextEligibilityForTesting();
};

}  // namespace glic

#endif  // CHROME_BROWSER_GLIC_TEST_SUPPORT_SCOPED_PAGE_CONTEXT_ELIGIBILITY_H_
