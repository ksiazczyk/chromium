// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mixin-based in-process browser test implementation
// summary: Implements MixinBasedInProcessBrowserTest, instantiating the mixin host support for Android or other platforms.
// ---

#include "chrome/test/base/mixin_based_in_process_browser_test.h"

// Implementation of MixinBasedInProcessBrowserTest.
#if BUILDFLAG(IS_ANDROID)
template class InProcessBrowserTestMixinHostSupport<AndroidBrowserTest>;
#else
template class InProcessBrowserTestMixinHostSupport<InProcessBrowserTest>;
#endif
