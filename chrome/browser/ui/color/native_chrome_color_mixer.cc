// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Native Chrome color mixer implementation
// summary: Provides an empty AddNativeChromeColorMixer stub for platforms other than ChromeOS, Linux, Mac and Windows.
// ---

#include "chrome/browser/ui/color/native_chrome_color_mixer.h"

#include "build/build_config.h"

#if !BUILDFLAG(IS_CHROMEOS) && !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_MAC) && \
    !BUILDFLAG(IS_WIN)
void AddNativeChromeColorMixer(ui::ColorProvider* provider,
                               const ui::ColorProviderKey& key) {}
#endif
