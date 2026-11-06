// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Main entry point for the iOS fuzzer engine
// summary: Provides the main function that starts an iOS app which runs libFuzzer with the given command-line arguments.
// ---

#import "testing/libfuzzer/fuzzer_support_ios/fuzzer_support.h"

int main(int argc, char** argv) {
  ios_fuzzer::RunFuzzerFromIOSApp(argc, argv);
  return 0;
}
