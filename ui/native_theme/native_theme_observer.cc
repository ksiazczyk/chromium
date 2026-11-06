// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Native theme observer implementation
// summary: Implements the NativeThemeObserver destructor, which checks that the observer is not still in an observer list when destroyed.
// ---

#include "ui/native_theme/native_theme_observer.h"

#include "base/check.h"
#include "base/observer_list_types.h"

namespace ui {

NativeThemeObserver::~NativeThemeObserver() {
  CHECK(!IsInObserverList());
}

}  // namespace ui
