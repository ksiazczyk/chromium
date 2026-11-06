// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Scoped fake InstanceID helper for Android tests header
// summary: Declares ScopedUseFakeInstanceIDAndroid, a scoped test helper that swaps in a fake Android InstanceID to avoid network and disk access.
// ---

#ifndef COMPONENTS_GCM_DRIVER_INSTANCE_ID_SCOPED_USE_FAKE_INSTANCE_ID_ANDROID_H_
#define COMPONENTS_GCM_DRIVER_INSTANCE_ID_SCOPED_USE_FAKE_INSTANCE_ID_ANDROID_H_

#include <jni.h>

namespace instance_id {

// Tests depending on InstanceID must use this, to avoid hitting the
// network/disk. Also clears cached InstanceIDs when constructed/destructed.
class ScopedUseFakeInstanceIDAndroid {
 public:
  ScopedUseFakeInstanceIDAndroid();

  ScopedUseFakeInstanceIDAndroid(const ScopedUseFakeInstanceIDAndroid&) =
      delete;
  ScopedUseFakeInstanceIDAndroid& operator=(
      const ScopedUseFakeInstanceIDAndroid&) = delete;

  ~ScopedUseFakeInstanceIDAndroid();

 private:
  bool previous_value_;
};

}  // namespace instance_id

#endif  // COMPONENTS_GCM_DRIVER_INSTANCE_ID_SCOPED_USE_FAKE_INSTANCE_ID_ANDROID_H_
