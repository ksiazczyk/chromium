// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Testing browser process platform part implementation
// summary: Provides the default constructor and destructor for the testing BrowserProcessPlatformPart subclass.
// ---

#include "chrome/test/base/testing_browser_process_platform_part.h"

TestingBrowserProcessPlatformPart::TestingBrowserProcessPlatformPart() =
    default;

TestingBrowserProcessPlatformPart::~TestingBrowserProcessPlatformPart() =
    default;
