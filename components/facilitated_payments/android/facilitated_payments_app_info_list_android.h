// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FacilitatedPaymentsAppInfoListAndroid class declaration
// summary: Declares the Android FacilitatedPaymentsAppInfoList class that wraps a Java object array of payment apps and reports its size.
// ---

#ifndef COMPONENTS_FACILITATED_PAYMENTS_ANDROID_FACILITATED_PAYMENTS_APP_INFO_LIST_ANDROID_H_
#define COMPONENTS_FACILITATED_PAYMENTS_ANDROID_FACILITATED_PAYMENTS_APP_INFO_LIST_ANDROID_H_

#include <cstddef>

#include "base/android/scoped_java_ref.h"
#include "components/facilitated_payments/core/browser/facilitated_payments_app_info_list.h"

namespace payments::facilitated {

class FacilitatedPaymentsAppInfoListAndroid
    : public FacilitatedPaymentsAppInfoList {
 public:
  explicit FacilitatedPaymentsAppInfoListAndroid(
      base::android::ScopedJavaLocalRef<jobjectArray> apps);
  ~FacilitatedPaymentsAppInfoListAndroid() override;

  // FacilitatedPaymentsAppInfoList:
  size_t Size() const override;

  const base::android::ScopedJavaLocalRef<jobjectArray>& GetJavaArray() const;

 private:
  base::android::ScopedJavaLocalRef<jobjectArray> apps_;
};

}  // namespace payments::facilitated

#endif  // COMPONENTS_FACILITATED_PAYMENTS_ANDROID_FACILITATED_PAYMENTS_APP_INFO_LIST_ANDROID_H_
