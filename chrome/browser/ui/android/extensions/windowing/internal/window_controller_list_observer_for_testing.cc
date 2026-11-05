// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WindowControllerListObserverForTesting implementation
// summary: Implements the singleton WindowControllerListObserverForTesting that records extension window events such as creation, removal, bounds and focus changes for tests.
// ---

#include "chrome/browser/ui/android/extensions/windowing/internal/window_controller_list_observer_for_testing.h"

#include "base/check_deref.h"
#include "base/memory/singleton.h"
#include "chrome/browser/extensions/window_controller.h"
#include "chrome/browser/ui/android/extensions/windowing/internal/extension_window_controller_bridge.h"

// static
WindowControllerListObserverForTesting*
WindowControllerListObserverForTesting::GetInstance() {
  return base::Singleton<WindowControllerListObserverForTesting>::get();
}

void WindowControllerListObserverForTesting::OnWindowControllerAdded(
    extensions::WindowController* window_controller) {
  ExtensionWindowControllerBridge::
      RecordExtensionInternalEventForTesting(  // IN-TEST
          window_controller, ExtensionInternalWindowEventForTesting::CREATED);
}

void WindowControllerListObserverForTesting::OnWindowControllerRemoved(
    extensions::WindowController* window_controller) {
  ExtensionWindowControllerBridge::
      RecordExtensionInternalEventForTesting(  // IN-TEST
          window_controller, ExtensionInternalWindowEventForTesting::REMOVED);
}

void WindowControllerListObserverForTesting::OnWindowBoundsChanged(
    extensions::WindowController* window_controller) {
  ExtensionWindowControllerBridge::
      RecordExtensionInternalEventForTesting(  // IN-TEST
          window_controller,
          ExtensionInternalWindowEventForTesting::BOUNDS_CHANGED);
}

void WindowControllerListObserverForTesting::OnWindowFocusChanged(
    extensions::WindowController* window_controller,
    bool has_focus) {
  ExtensionWindowControllerBridge::
      RecordExtensionInternalEventForTesting(  // IN-TEST
          window_controller,
          has_focus ? ExtensionInternalWindowEventForTesting::FOCUS_OBTAINED
                    : ExtensionInternalWindowEventForTesting::FOCUS_LOST);
}
