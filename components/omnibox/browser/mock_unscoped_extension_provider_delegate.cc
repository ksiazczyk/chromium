// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock unscoped extension provider delegate implementation
// summary: Implements the GMock mock delegate that stands in for UnscopedExtensionProviderDelegate in omnibox provider tests.
// ---

#include "components/omnibox/browser/mock_unscoped_extension_provider_delegate.h"

MockUnscopedExtensionProviderDelegate::MockUnscopedExtensionProviderDelegate() =
    default;
MockUnscopedExtensionProviderDelegate::
    ~MockUnscopedExtensionProviderDelegate() = default;
