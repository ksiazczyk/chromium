// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Site search dialog save action interface
// summary: Interface invoked when the user clicks the save button in the site search dialog, passing the name, keyword, and URL.
// ---

package org.chromium.chrome.browser.search_engines.settings.dialog;

import org.chromium.build.annotations.NullMarked;

/** Interface to call into SiteSearchDialog when the user clicks the save button. */
@NullMarked
public interface SiteSearchDialogSaveAction {
    void onSave(String name, String keyword, String url);
}
