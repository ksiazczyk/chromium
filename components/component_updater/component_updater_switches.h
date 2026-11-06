// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Component updater switch declarations
// summary: Declares the component updater command-line switch constants defined in the corresponding source file.
// ---

#ifndef COMPONENTS_COMPONENT_UPDATER_COMPONENT_UPDATER_SWITCHES_H_
#define COMPONENTS_COMPONENT_UPDATER_COMPONENT_UPDATER_SWITCHES_H_

namespace switches {

// All switches in alphabetical order. The switches should be documented
// alongside the definition of their values in the .cc file.
extern const char kComponentUpdater[];
extern const char kComponentUpdaterTrustTokensComponentPath[];
extern const char kCampaignsTestTag[];
extern const char kDemoModeTestTag[];
extern const char kEnableComponentUninstall[];

}  // namespace switches

#endif  // COMPONENTS_COMPONENT_UPDATER_COMPONENT_UPDATER_SWITCHES_H_
