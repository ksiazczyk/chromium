// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Enrollment test constants for the policy test server
// summary: Defines inline test constants such as the test domain, serial number, brand code key, and hardware class used during enrollment testing.
// ---

#ifndef CHROME_BROWSER_ASH_POLICY_TEST_SUPPORT_POLICY_TEST_SERVER_CONSTANTS_H_
#define CHROME_BROWSER_ASH_POLICY_TEST_SUPPORT_POLICY_TEST_SERVER_CONSTANTS_H_

namespace ash::test {

// Test constants used during enrollment wherever appropriate.
inline constexpr char kTestDomain[] = "test-domain.com";
inline constexpr char kTestRlzBrandCodeKey[] = "TEST";
inline constexpr char kTestSerialNumber[] = "111111";
inline constexpr char kTestHardwareClass[] = "hw";

}  // namespace ash::test

#endif  // CHROME_BROWSER_ASH_POLICY_TEST_SUPPORT_POLICY_TEST_SERVER_CONSTANTS_H_
