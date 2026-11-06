// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Android JNI bindings for X.509 utility trust store notifications
// summary: Implements Android JNI callbacks that notify CertDatabase observers when the Android trust store or client certificate store changes.
// ---

#include "base/feature_list.h"
#include "net/base/features.h"
#include "net/cert/cert_database.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "net/net_jni_headers/X509Util_jni.h"

using jni_zero::JavaRef;

namespace net {

static void JNI_X509Util_NotifyTrustStoreChanged(JNIEnv* env) {
  CertDatabase::GetInstance()->NotifyObserversTrustStoreChanged();
}

static void JNI_X509Util_NotifyClientCertStoreChanged(JNIEnv* env) {
  CertDatabase::GetInstance()->NotifyObserversClientCertStoreChanged();
}

}  // namespace net

DEFINE_JNI(X509Util)
