// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Defines the prefs that are used by code across multiple embedders and don't
// have anywhere more specific to go.

// ---docerion
// type: source
// title: Shared embedder preference names
// summary: Defines the alternate error pages enabled preference constant used by code across multiple embedders.
// ---

#ifndef COMPONENTS_EMBEDDER_SUPPORT_PREF_NAMES_H_
#define COMPONENTS_EMBEDDER_SUPPORT_PREF_NAMES_H_

namespace embedder_support {

// A boolean pref set to true if we're using Link Doctor error pages.
inline constexpr char kAlternateErrorPagesEnabled[] =
    "alternate_error_pages.enabled";

}  // namespace embedder_support

#endif  // COMPONENTS_EMBEDDER_SUPPORT_PREF_NAMES_H_
