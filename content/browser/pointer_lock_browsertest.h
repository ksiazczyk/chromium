// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Pointer lock browser test hooks header
// summary: Declares InstallCreateHooksForPointerLockBrowserTests, which installs mock widget host views used by pointer lock browser tests.
// ---

#ifndef CONTENT_BROWSER_POINTER_LOCK_BROWSERTEST_H_
#define CONTENT_BROWSER_POINTER_LOCK_BROWSERTEST_H_

namespace content {

void InstallCreateHooksForPointerLockBrowserTests();

}  // namespace content

#endif  // CONTENT_BROWSER_POINTER_LOCK_BROWSERTEST_H_
