// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AppMenuSubmenuHeaderItemProperties property keys
// summary: Defines property keys for app menu submenu header items, extending the base item keys with an icon row visibility flag.
// ---

package org.chromium.chrome.browser.ui.appmenu;

import static org.chromium.chrome.browser.ui.appmenu.AppMenuItemProperties.ENABLED;
import static org.chromium.chrome.browser.ui.appmenu.AppMenuItemProperties.KEY_LISTENER;
import static org.chromium.chrome.browser.ui.appmenu.AppMenuItemProperties.MENU_ITEM_ID;
import static org.chromium.chrome.browser.ui.appmenu.AppMenuItemProperties.TITLE;
import static org.chromium.chrome.browser.ui.appmenu.AppMenuItemWithSubmenuProperties.CLICK_LISTENER;

import org.chromium.build.annotations.NullMarked;
import org.chromium.ui.modelutil.PropertyKey;
import org.chromium.ui.modelutil.PropertyModel.WritableBooleanPropertyKey;

/** {@link PropertyKey} list for app menu. */
@NullMarked
public class AppMenuSubmenuHeaderItemProperties {

    public static final WritableBooleanPropertyKey SHOULD_SHOW_ICON_ROW =
            new WritableBooleanPropertyKey();

    public static final PropertyKey[] ALL_KEYS =
            new PropertyKey[] {
                MENU_ITEM_ID, TITLE, ENABLED, CLICK_LISTENER, KEY_LISTENER, SHOULD_SHOW_ICON_ROW
            };
}
