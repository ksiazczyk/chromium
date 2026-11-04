// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GetLoadedModules helper declaration
// summary: Declares GetLoadedModules, a helper that retrieves a ModuleInfo set for all currently loaded modules and returns false on failure.
// ---

#ifndef CHROME_BROWSER_INSTALL_VERIFICATION_WIN_MODULE_VERIFICATION_COMMON_H_
#define CHROME_BROWSER_INSTALL_VERIFICATION_WIN_MODULE_VERIFICATION_COMMON_H_

#include <stddef.h>

#include <set>
#include <vector>

struct ModuleInfo;

// Retrieves a ModuleInfo set representing all currenly loaded modules. Returns
// false in case of failure.
bool GetLoadedModules(std::set<ModuleInfo>* loaded_modules);

#endif  // CHROME_BROWSER_INSTALL_VERIFICATION_WIN_MODULE_VERIFICATION_COMMON_H_
