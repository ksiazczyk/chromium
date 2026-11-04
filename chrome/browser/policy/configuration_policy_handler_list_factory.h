// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Configuration policy handler list factory header
// summary: Declares BuildHandlerList, which assembles the platform-specific list of configuration policy handlers for Chrome.
// ---

#ifndef CHROME_BROWSER_POLICY_CONFIGURATION_POLICY_HANDLER_LIST_FACTORY_H_
#define CHROME_BROWSER_POLICY_CONFIGURATION_POLICY_HANDLER_LIST_FACTORY_H_

#include <memory>

namespace policy {

class ConfigurationPolicyHandlerList;
class Schema;

// Builds a platform-specific handler list.
std::unique_ptr<ConfigurationPolicyHandlerList> BuildHandlerList(
    const Schema& chrome_schema);

}  // namespace policy

#endif  // CHROME_BROWSER_POLICY_CONFIGURATION_POLICY_HANDLER_LIST_FACTORY_H_
