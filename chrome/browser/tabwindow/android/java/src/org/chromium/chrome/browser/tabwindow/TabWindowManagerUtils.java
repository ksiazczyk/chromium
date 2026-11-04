// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TabWindowManagerUtils for tab group title and color lookup
// summary: Utility class that looks up a tab group's displayable title and color in any window via the TabWindowManager, falling back to grey when not found.
// ---

package org.chromium.chrome.browser.tabwindow;

import android.content.Context;

import org.chromium.base.Token;
import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;
import org.chromium.chrome.browser.tabmodel.TabGroupTitleUtils;
import org.chromium.chrome.browser.tabmodel.TabModelSelector;
import org.chromium.components.tab_groups.TabGroupColorId;

/** Utils for TabWindowManager. */
@NullMarked
public class TabWindowManagerUtils {

    /**
     * Returns the title of the tab group.
     *
     * @param context The context to load resources from.
     * @param tabWindowManager The tab window manager.
     * @param tabGroupId The id of the tab group.
     * @param isIncognito Whether the tab group is in incognito mode.
     * @return The title of the tab group or null if the tab group is not found.
     */
    public static @Nullable String getTabGroupTitleInAnyWindow(
            Context context,
            TabWindowManager tabWindowManager,
            Token tabGroupId,
            boolean isIncognito) {
        @WindowId int windowId = tabWindowManager.findWindowIdForTabGroup(tabGroupId);
        if (windowId == TabWindowManager.INVALID_WINDOW_ID) {
            return null;
        }
        TabModelSelector tabModelSelector = tabWindowManager.getTabModelSelectorById(windowId);
        if (tabModelSelector == null) return null;
        return TabGroupTitleUtils.getDisplayableTitle(
                context, tabModelSelector.getModel(isIncognito), tabGroupId);
    }

    /**
     * Returns the color of the tab group.
     *
     * @param tabWindowManager The tab window manager.
     * @param tabGroupId The id of the tab group.
     * @param isIncognito Whether the tab group is in incognito mode.
     * @return The color of the tab group or fallback to grey.
     */
    public static @TabGroupColorId int getTabGroupColorInAnyWindow(
            TabWindowManager tabWindowManager, Token tabGroupId, boolean isIncognito) {
        @WindowId int windowId = tabWindowManager.findWindowIdForTabGroup(tabGroupId);
        if (windowId == TabWindowManager.INVALID_WINDOW_ID) return TabGroupColorId.GREY;
        TabModelSelector tabModelSelector = tabWindowManager.getTabModelSelectorById(windowId);
        if (tabModelSelector == null) return TabGroupColorId.GREY;
        return tabModelSelector.getModel(isIncognito).getTabGroupColorWithFallback(tabGroupId);
    }
}
