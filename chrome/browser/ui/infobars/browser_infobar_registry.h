// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Browser infobar registry header
// summary: Declares RegisterInfoBars and RegisterPreProfileInitInfoBars for registering infobars supported by the centralized infobar framework.
// ---

#ifndef CHROME_BROWSER_UI_INFOBARS_BROWSER_INFOBAR_REGISTRY_H_
#define CHROME_BROWSER_UI_INFOBARS_BROWSER_INFOBAR_REGISTRY_H_

#include "build/branding_buildflags.h"
#include "build/buildflag.h"

namespace infobars {

// Registers all infobars supported by the centralized infobar framework.
void RegisterInfoBars();

// Registers infobars that need to be registered early, before profile
// initialization.
void RegisterPreProfileInitInfoBars();

}  // namespace infobars

#endif  // CHROME_BROWSER_UI_INFOBARS_BROWSER_INFOBAR_REGISTRY_H_
