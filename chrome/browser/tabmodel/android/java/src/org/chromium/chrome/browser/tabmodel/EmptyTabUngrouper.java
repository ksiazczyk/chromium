// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Empty TabUngrouper implementation
// summary: No-op implementation of TabUngrouper whose ungroup operations for tabs and tab groups do nothing.
// ---

package org.chromium.chrome.browser.tabmodel;

import org.chromium.base.Token;
import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;
import org.chromium.chrome.browser.tab.Tab;

import java.util.List;

/** Empty implementation of {@link TabUngrouper}. */
@NullMarked
public class EmptyTabUngrouper implements TabUngrouper {
    @Override
    public void ungroupTabs(
            List<Tab> tabs,
            boolean trailing,
            boolean allowDialog,
            @Nullable TabModelActionListener listener) {}

    @Override
    public void ungroupTabGroup(
            Token tabGroupId,
            boolean trailing,
            boolean allowDialog,
            @Nullable TabModelActionListener listener) {}
}
