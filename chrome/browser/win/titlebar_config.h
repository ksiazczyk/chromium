// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Titlebar custom drawing configuration header
// summary: Declares ShouldBrowserCustomDrawTitlebar, indicating whether a browser window should custom draw its titlebar on Windows.
// ---

#ifndef CHROME_BROWSER_WIN_TITLEBAR_CONFIG_H_
#define CHROME_BROWSER_WIN_TITLEBAR_CONFIG_H_

class BrowserView;

// Returns whether we should custom draw the titlebar for a browser window.
bool ShouldBrowserCustomDrawTitlebar(BrowserView* browser_view);

#endif  // CHROME_BROWSER_WIN_TITLEBAR_CONFIG_H_
