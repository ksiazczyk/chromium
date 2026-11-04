// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Browser theme provider delegate interface
// summary: Declares an interface through which the theme provider obtains browser-specific information such as the active theme supplier and custom frame usage.
// ---

#ifndef CHROME_BROWSER_THEMES_BROWSER_THEME_PROVIDER_DELEGATE_H_
#define CHROME_BROWSER_THEMES_BROWSER_THEME_PROVIDER_DELEGATE_H_

class CustomThemeSupplier;

// Provides Browser-specific theme information.
class BrowserThemeProviderDelegate {
 public:
  virtual ~BrowserThemeProviderDelegate() = default;
  virtual CustomThemeSupplier* GetThemeSupplier() const = 0;
  virtual bool ShouldUseCustomFrame() const = 0;
};

#endif  // CHROME_BROWSER_THEMES_BROWSER_THEME_PROVIDER_DELEGATE_H_
