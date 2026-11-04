// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Desktop Android stubs for the Chrome extensions API client
// summary: Supplies desktop Android stubs for ChromeExtensionsAPIClient methods that are not yet supported there, such as USB device permissions prompts.
// ---

#include "chrome/browser/extensions/api/chrome_extensions_api_client.h"

#include <memory>

#include "base/notimplemented.h"
#include "extensions/buildflags/buildflags.h"

// TODO(crbug.com/417770773): This file contains stubs for the parts of
// ChromeExtensionsAPIClient that are not yet supported on desktop Android. Once
// these functions are supported on desktop Android this file can be deleted.
// The stubs are implemented here instead of falling back to ExtensionsAPIClient
// to allow NOTIMPLEMENTED() logging and a place to put TODOs with bug IDs.

static_assert(BUILDFLAG(ENABLE_DESKTOP_ANDROID_EXTENSIONS));

namespace extensions {

std::unique_ptr<UsbDevicePermissionsPrompt>
ChromeExtensionsAPIClient::CreateUsbDevicePermissionsPrompt(
    content::WebContents* web_contents) const {
  // TODO(crbug.com/417785993): Support device permissions prompts on desktop
  // Android.
  return nullptr;
}

}  // namespace extensions
