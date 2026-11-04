// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chrome component updater configurator header
// summary: Declares the factory function that builds the Chrome component updater configurator from command line and preferences.
// ---

#ifndef CHROME_BROWSER_COMPONENT_UPDATER_CHROME_COMPONENT_UPDATER_CONFIGURATOR_H_
#define CHROME_BROWSER_COMPONENT_UPDATER_CHROME_COMPONENT_UPDATER_CONFIGURATOR_H_

#include "base/memory/scoped_refptr.h"
#include "components/update_client/configurator.h"

class PrefService;

namespace base {
class CommandLine;
}

namespace component_updater {

scoped_refptr<update_client::Configurator>
MakeChromeComponentUpdaterConfigurator(const base::CommandLine* cmdline,
                                       PrefService* pref_service);

}  // namespace component_updater

#endif  // CHROME_BROWSER_COMPONENT_UPDATER_CHROME_COMPONENT_UPDATER_CONFIGURATOR_H_
