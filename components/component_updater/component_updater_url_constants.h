// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Component updater URL constants
// summary: Declares constants for the default and fallback XML and JSON component update endpoint URLs.
// ---

#ifndef COMPONENTS_COMPONENT_UPDATER_COMPONENT_UPDATER_URL_CONSTANTS_H_
#define COMPONENTS_COMPONENT_UPDATER_COMPONENT_UPDATER_URL_CONSTANTS_H_

namespace component_updater {

// Xml endpoints.
extern const char kUpdaterDefaultUrl[];
extern const char kUpdaterFallbackUrl[];

// JSON endpoints.
extern const char kUpdaterJSONDefaultUrl[];
extern const char kUpdaterJSONFallbackUrl[];

}  // namespace component_updater

#endif  // COMPONENTS_COMPONENT_UPDATER_COMPONENT_UPDATER_URL_CONSTANTS_H_
