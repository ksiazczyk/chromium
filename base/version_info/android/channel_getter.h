// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header for the Android channel getter API
// summary: Declares the exported GetChannel and SetChannel functions for reading the release channel in the version_info android namespace.
// ---

#ifndef BASE_VERSION_INFO_ANDROID_CHANNEL_GETTER_H_
#define BASE_VERSION_INFO_ANDROID_CHANNEL_GETTER_H_

#include "base/base_export.h"
#include "base/version_info/channel.h"

namespace version_info {
namespace android {

BASE_EXPORT Channel GetChannel();
BASE_EXPORT void SetChannel(Channel channel);

}  // namespace android
}  // namespace version_info

#endif  // BASE_VERSION_INFO_ANDROID_CHANNEL_GETTER_H_
