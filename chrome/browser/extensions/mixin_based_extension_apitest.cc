// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mixin-based extension API test base implementation
// summary: Provides the out-of-line template instantiation for the mixin-based extension API test fixture.
// ---

#include "chrome/browser/extensions/mixin_based_extension_apitest.h"

#include "chrome/browser/extensions/extension_apitest.h"
#include "extensions/buildflags/buildflags.h"

static_assert(BUILDFLAG(ENABLE_EXTENSIONS_CORE));

template class InProcessBrowserTestMixinHostSupport<
    extensions::ExtensionApiTest>;
