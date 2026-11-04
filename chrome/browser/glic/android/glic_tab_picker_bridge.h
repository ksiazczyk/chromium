// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Glic tab picker bridge header
// summary: Declares the static bridge for opening the Android tab picker and updating pinned tabs in the sharing manager.
// ---

#ifndef CHROME_BROWSER_GLIC_ANDROID_GLIC_TAB_PICKER_BRIDGE_H_
#define CHROME_BROWSER_GLIC_ANDROID_GLIC_TAB_PICKER_BRIDGE_H_

#include <optional>
#include <vector>

#include "base/functional/callback.h"
#include "base/memory/weak_ptr.h"

class TabAndroid;

namespace ui {
class WindowAndroid;
}

namespace glic {

class GlicSharingManager;

class GlicTabPickerBridge {
 public:
  using OnCompleteCallback = base::OnceClosure;

  // Opens the Android native tab picker, preselecting currently pinned tabs,
  // and updates the sharing manager with newly pinned and unpinned tabs.
  static void OpenTabPicker(ui::WindowAndroid* window_android,
                            base::WeakPtr<GlicSharingManager> sharing_manager,
                            OnCompleteCallback on_complete_callback);

  static void OnTabPickerCompletedForTesting(
      const std::vector<TabAndroid*>& initial_selected,
      base::WeakPtr<GlicSharingManager> sharing_manager,
      OnCompleteCallback on_complete_callback,
      std::optional<std::vector<TabAndroid*>> final_selected);
};

}  // namespace glic

#endif  // CHROME_BROWSER_GLIC_ANDROID_GLIC_TAB_PICKER_BRIDGE_H_
