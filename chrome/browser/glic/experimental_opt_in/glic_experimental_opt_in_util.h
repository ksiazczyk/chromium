// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Glic experimental opt-in URL decoration utility header
// summary: Declares DecorateGlicOptInUrl, the helper that adds environment parameters such as hotkey, theme and localization to opt-in URLs.
// ---

#ifndef CHROME_BROWSER_GLIC_EXPERIMENTAL_OPT_IN_GLIC_EXPERIMENTAL_OPT_IN_UTIL_H_
#define CHROME_BROWSER_GLIC_EXPERIMENTAL_OPT_IN_GLIC_EXPERIMENTAL_OPT_IN_UTIL_H_

class GURL;
class Profile;

namespace glic {

// Decorates any Glic experimental opt-in URL with standard dynamic environment
// parameters like hotkeys, theme, and localization.
GURL DecorateGlicOptInUrl(Profile* profile, GURL url);

}  // namespace glic

#endif  // CHROME_BROWSER_GLIC_EXPERIMENTAL_OPT_IN_GLIC_EXPERIMENTAL_OPT_IN_UTIL_H_
