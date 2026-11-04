// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Android off-the-record session state
// summary: Android implementation of IsOffTheRecordSessionActive() that delegates the check to TabModelList.
// ---

#include "chrome/browser/ui/browser_otr_state.h"

#include "chrome/browser/ui/android/tab_model/tab_model_list.h"

bool IsOffTheRecordSessionActive() {
  return TabModelList::IsOffTheRecordSessionActive();
}
