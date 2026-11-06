// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header for the ChromeOS examples views delegate
// summary: Declares ExamplesViewsDelegateChromeOS, a desktop test views delegate that observes window tree hosts and manages a WM test helper for the examples app.
// ---

#ifndef UI_VIEWS_EXAMPLES_EXAMPLES_VIEWS_DELEGATE_CHROMEOS_H_
#define UI_VIEWS_EXAMPLES_EXAMPLES_VIEWS_DELEGATE_CHROMEOS_H_

#include <memory>

#include "base/scoped_observation.h"
#include "ui/aura/window_tree_host.h"
#include "ui/aura/window_tree_host_observer.h"
#include "ui/views/test/desktop_test_views_delegate.h"

namespace wm {
class WMTestHelper;
}

namespace views::examples {

class ExamplesViewsDelegateChromeOS : public DesktopTestViewsDelegate,
                                      public aura::WindowTreeHostObserver {
 public:
  ExamplesViewsDelegateChromeOS();
  ~ExamplesViewsDelegateChromeOS() override;

 private:
  // ViewsDelegate:
  void OnBeforeWidgetInit(Widget::InitParams* params,
                          internal::NativeWidgetDelegate* delegate) override;

  // aura::WindowTreeHostObserver:
  void OnHostCloseRequested(aura::WindowTreeHost* host) override;

  base::ScopedObservation<aura::WindowTreeHost, aura::WindowTreeHostObserver>
      observation_{this};
  std::unique_ptr<wm::WMTestHelper> wm_helper_;
};

}  // namespace views::examples

#endif  // UI_VIEWS_EXAMPLES_EXAMPLES_VIEWS_DELEGATE_CHROMEOS_H_
