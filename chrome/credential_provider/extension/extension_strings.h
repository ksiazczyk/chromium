// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Extension string constant declarations
// summary: Declares the GCPW extension service name, display name and enable registry string constants.
// ---

#ifndef CHROME_CREDENTIAL_PROVIDER_EXTENSION_EXTENSION_STRINGS_H_
#define CHROME_CREDENTIAL_PROVIDER_EXTENSION_EXTENSION_STRINGS_H_

namespace credential_provider {
namespace extension {

// Name of the GCPW extension service.
extern const wchar_t kGCPWExtensionServiceName[];

// Display name of the GCPW extension service.
extern const wchar_t kGCPWExtensionServiceDisplayName[];

// Registry which controls whether to install GCPW Extension.
extern const wchar_t kEnableGCPWExtension[];

}  // namespace extension
}  // namespace credential_provider

#endif  // CHROME_CREDENTIAL_PROVIDER_EXTENSION_EXTENSION_STRINGS_H_
