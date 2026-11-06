// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Native screen capture picker factory
// summary: Factory that returns a native macOS screen capture picker when the ScreenCaptureKit sharing picker feature is enabled.
// ---

#include "content/browser/media/capture/native_screen_capture_picker.h"

#if BUILDFLAG(IS_MAC)
#include "content/browser/media/capture/native_screen_capture_picker_mac.h"
#include "media/base/media_switches.h"
#endif

namespace content {

std::unique_ptr<NativeScreenCapturePicker>
MaybeCreateNativeScreenCapturePicker() {
#if BUILDFLAG(IS_MAC)
  if (base::FeatureList::IsEnabled(media::kUseSCContentSharingPicker)) {
    return CreateNativeScreenCapturePickerMac();
  }
#endif
  return nullptr;
}

}  // namespace content
