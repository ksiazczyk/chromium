// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chrome typography provider header
// summary: Declares ChromeTypographyProvider, the views typography provider that implements the Harmony spec.
// ---

#ifndef CHROME_BROWSER_UI_VIEWS_CHROME_TYPOGRAPHY_PROVIDER_H_
#define CHROME_BROWSER_UI_VIEWS_CHROME_TYPOGRAPHY_PROVIDER_H_

#include "ui/color/color_id.h"
#include "ui/views/style/typography_provider.h"

// TypographyProvider implementing the Harmony spec.
class ChromeTypographyProvider : public views::TypographyProvider {
 public:
  ChromeTypographyProvider() = default;

  ChromeTypographyProvider(const ChromeTypographyProvider&) = delete;
  ChromeTypographyProvider& operator=(const ChromeTypographyProvider&) = delete;

 protected:
  // TypographyProvider:
  bool StyleAllowedForContext(int context, int style) const override;
  ui::ResourceBundle::FontDetails GetFontDetailsImpl(int context,
                                                     int style) const override;
  ui::ColorId GetColorIdImpl(int context, int style) const override;
  int GetLineHeightImpl(int context, int style) const override;
};

#endif  // CHROME_BROWSER_UI_VIEWS_CHROME_TYPOGRAPHY_PROVIDER_H_
