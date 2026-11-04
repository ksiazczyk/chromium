// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Glic utility header
// summary: Declares IsApiGlicPrivateEnabled, a helper that returns true when the glic private extension API is enabled.
// ---

#ifndef CHROME_BROWSER_EXTENSIONS_GLIC_UTIL_H_
#define CHROME_BROWSER_EXTENSIONS_GLIC_UTIL_H_

namespace extensions {

// Returns true if the glic private API is enabled.
bool IsApiGlicPrivateEnabled();

}  // namespace extensions

#endif  // CHROME_BROWSER_EXTENSIONS_GLIC_UTIL_H_
