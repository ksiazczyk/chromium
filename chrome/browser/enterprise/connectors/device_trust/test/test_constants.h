// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Device trust test constants header
// summary: Declares shared test constants such as allowed and other host names and a challenge parse failure message for device trust tests.
// ---

#ifndef CHROME_BROWSER_ENTERPRISE_CONNECTORS_DEVICE_TRUST_TEST_TEST_CONSTANTS_H_
#define CHROME_BROWSER_ENTERPRISE_CONNECTORS_DEVICE_TRUST_TEST_TEST_CONSTANTS_H_

namespace enterprise_connectors::test {

extern const char kAllowedHost[];
extern const char kOtherHost[];

extern const char kFailedToParseChallengeJsonResponse[];

}  // namespace enterprise_connectors::test

#endif  // CHROME_BROWSER_ENTERPRISE_CONNECTORS_DEVICE_TRUST_TEST_TEST_CONSTANTS_H_
