// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BrowserWindow custom deleter header
// summary: Declares the BrowserWindowDeleter struct, a custom deleter giving BrowserWindow subclasses flexibility in how instances are destroyed.
// ---

#ifndef CHROME_BROWSER_UI_BROWSER_WINDOW_DELETER_H_
#define CHROME_BROWSER_UI_BROWSER_WINDOW_DELETER_H_

class BrowserWindow;

// Custom deleter to give BrowserWindow subclasses greater flexibility in how
// BrowserWindow instances are destroyed.
struct BrowserWindowDeleter {
  void operator()(BrowserWindow* browser_window);
};

#endif  // CHROME_BROWSER_UI_BROWSER_WINDOW_DELETER_H_
