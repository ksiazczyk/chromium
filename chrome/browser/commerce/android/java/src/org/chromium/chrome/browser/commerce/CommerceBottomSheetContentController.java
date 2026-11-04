// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CommerceBottomSheetContentController interface
// summary: Defines an interface for requesting that the commerce bottom sheet be shown.
// ---

package org.chromium.chrome.browser.commerce;

import org.chromium.build.annotations.NullMarked;

@NullMarked
public interface CommerceBottomSheetContentController {
    /** Request to show the commerce bottom sheet. */
    void requestShowContent();
}
