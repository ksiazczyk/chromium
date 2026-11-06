// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Site isolation preference name declarations
// summary: Declares the preference name constants for user-triggered and web-triggered isolated origins.
// ---

#ifndef COMPONENTS_SITE_ISOLATION_PREF_NAMES_H_
#define COMPONENTS_SITE_ISOLATION_PREF_NAMES_H_

namespace site_isolation {
namespace prefs {

extern const char kUserTriggeredIsolatedOrigins[];
extern const char kWebTriggeredIsolatedOrigins[];

}  // namespace prefs
}  // namespace site_isolation

#endif  // COMPONENTS_SITE_ISOLATION_PREF_NAMES_H_
