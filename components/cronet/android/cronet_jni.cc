// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Cronet JNI library load and unload entry points
// summary: Defines the JNI_OnLoad and JNI_OnUnLoad entry points that delegate to the Cronet library loader when the native shared library is loaded or unloaded.
// ---

#include "components/cronet/android/cronet_library_loader.h"

// This is called by the VM when the shared library is first loaded.
extern "C" jint JNI_OnLoad(JavaVM* vm, void* reserved) {
  return cronet::CronetOnLoad(vm, reserved);
}

extern "C" void JNI_OnUnLoad(JavaVM* vm, void* reserved) {
  cronet::CronetOnUnLoad(vm, reserved);
}
