// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Crosier helper command line switch
// summary: Defines the command line switch constant that carries the test sudo helper server socket path.
// ---

#ifndef CHROME_TEST_BASE_CHROMEOS_CROSIER_HELPER_SWITCHES_H_
#define CHROME_TEST_BASE_CHROMEOS_CROSIER_HELPER_SWITCHES_H_

namespace crosier {

inline constexpr char kSwitchSocketPath[] = "test-sudo-helper-socket-path";

}  // namespace crosier

#endif  // CHROME_TEST_BASE_CHROMEOS_CROSIER_HELPER_SWITCHES_H_
