// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Extension info header
// summary: Declares helpers that convert extension types to protos and append extension information into profile reports.
// ---

#ifndef CHROME_BROWSER_ENTERPRISE_REPORTING_EXTENSION_INFO_H_
#define CHROME_BROWSER_ENTERPRISE_REPORTING_EXTENSION_INFO_H_

#include "components/policy/proto/device_management_backend.pb.h"
#include "extensions/common/extension.h"

class Profile;

namespace enterprise_reporting {

enterprise_management::Extension_ExtensionType ConvertExtensionTypeToProto(
    extensions::Manifest::Type extension_type);

void AppendExtensionInfoIntoProfileReport(
    Profile* profile,
    enterprise_management::ChromeUserProfileInfo* profile_info);

}  // namespace enterprise_reporting

#endif  // CHROME_BROWSER_ENTERPRISE_REPORTING_EXTENSION_INFO_H_
