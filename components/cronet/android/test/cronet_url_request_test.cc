// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Cronet URL request test JNI helper
// summary: Exposes the net load flag that disables connection migration to cellular networks to the CronetUrlRequestTest Java tests.
// ---

#include "net/base/load_flags.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "components/cronet/android/cronet_tests_jni_headers/CronetUrlRequestTest_jni.h"

static int32_t JNI_CronetUrlRequestTest_GetConnectionMigrationDisableLoadFlag(
    JNIEnv* env) {
  return net::LOAD_DISABLE_CONNECTION_MIGRATION_TO_CELLULAR;
}

DEFINE_JNI(CronetUrlRequestTest)
