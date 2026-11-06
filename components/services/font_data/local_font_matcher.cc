// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Local font matcher factory implementation
// summary: Implements LocalFontMatcher::Create, returning a DirectWrite-based matcher on Windows and nullptr on other platforms.
// ---

#include "components/services/font_data/local_font_matcher.h"

#include <memory>

#include "build/build_config.h"

#if BUILDFLAG(IS_WIN)
#include "components/services/font_data/dwrite_local_font_matcher.h"
#endif  // BUILDFLAG(IS_WIN)

namespace font_data_service {

// static
std::unique_ptr<LocalFontMatcher> LocalFontMatcher::Create() {
#if BUILDFLAG(IS_WIN)
  return std::make_unique<DWriteLocalFontMatcher>();
#else
  return nullptr;
#endif  // BUILDFLAG(IS_WIN)
}

}  // namespace font_data_service
