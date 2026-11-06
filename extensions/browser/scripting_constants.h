// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Scripting constants header
// summary: Defines the StateStore storage key used to persist dynamic content script metadata across sessions.
// ---

#ifndef EXTENSIONS_BROWSER_SCRIPTING_CONSTANTS_H_
#define EXTENSIONS_BROWSER_SCRIPTING_CONSTANTS_H_

namespace extensions {
namespace scripting {

// The key for the field in the extension's StateStore for dynamic content
// script metadata that persists across sessions.
inline constexpr char kRegisteredScriptsStorageKey[] = "dynamic_scripts";

}  // namespace scripting
}  // namespace extensions

#endif  // EXTENSIONS_BROWSER_SCRIPTING_CONSTANTS_H_
