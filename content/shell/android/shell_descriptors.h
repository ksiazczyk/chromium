// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Shell global descriptor keys
// summary: Header defining an enum of global descriptor keys for the shell pak file and Android minidump used with base::GlobalDescriptors.
// ---

#ifndef CONTENT_SHELL_ANDROID_SHELL_DESCRIPTORS_H_
#define CONTENT_SHELL_ANDROID_SHELL_DESCRIPTORS_H_

#include "content/public/common/content_descriptors.h"

// This is a list of global descriptor keys to be used with the
// base::GlobalDescriptors object (see base/posix/global_descriptors.h)
enum {
  kShellPakDescriptor = kContentIPCDescriptorMax + 1,
  kAndroidMinidumpDescriptor,
};

#endif  // CONTENT_SHELL_ANDROID_SHELL_DESCRIPTORS_H_
