// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Plugin metadata implementation
// summary: Implements the PluginMetadata constructor and destructor for a class holding a plugin's identifier, name, and security status.
// ---

#include "chrome/browser/plugins/plugin_metadata.h"

#include <string>

#include "content/public/common/webplugininfo.h"

PluginMetadata::PluginMetadata(const std::string& identifier,
                               const std::u16string& name,
                               SecurityStatus security_status)
    : identifier_(identifier), name_(name), security_status_(security_status) {}

PluginMetadata::~PluginMetadata() = default;
