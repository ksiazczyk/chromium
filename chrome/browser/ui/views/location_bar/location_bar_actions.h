// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Location bar omnibox actions header
// summary: Declares RegisterOmniboxActions, which registers omnibox-related browser actions for the location bar.
// ---

#ifndef CHROME_BROWSER_UI_VIEWS_LOCATION_BAR_LOCATION_BAR_ACTIONS_H_
#define CHROME_BROWSER_UI_VIEWS_LOCATION_BAR_LOCATION_BAR_ACTIONS_H_

class BrowserWindowInterface;

void RegisterOmniboxActions(BrowserWindowInterface* browser);

#endif  // CHROME_BROWSER_UI_VIEWS_LOCATION_BAR_LOCATION_BAR_ACTIONS_H_
