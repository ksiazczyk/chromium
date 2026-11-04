// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DlpWindowObserver class
// summary: Declares DlpWindowObserver, an aura window observer helper that notifies a delegate about changes to windows with confidential content.
// ---

#ifndef CHROME_BROWSER_ASH_POLICY_DLP_DLP_WINDOW_OBSERVER_H_
#define CHROME_BROWSER_ASH_POLICY_DLP_DLP_WINDOW_OBSERVER_H_

#include "base/memory/raw_ptr.h"
#include "ui/aura/window_observer.h"

namespace aura {
class Window;
}  // namespace aura

namespace policy {

// Helper class that observes windows with confidential content and notifies
// when their visible (occluded) area changes.
class DlpWindowObserver : public aura::WindowObserver {
 public:
  class Delegate {
   public:
    virtual ~Delegate() = default;

    virtual void OnWindowOcclusionChanged(aura::Window* window) = 0;

    virtual void OnWindowDestroying(aura::Window* window) = 0;

    virtual void OnWindowTitleChanged(aura::Window* window) = 0;
  };

  DlpWindowObserver(aura::Window* window, Delegate* delegate);
  DlpWindowObserver(const DlpWindowObserver&) = delete;
  DlpWindowObserver& operator=(const DlpWindowObserver&) = delete;
  ~DlpWindowObserver() override;

  // aura::WindowObserver overrides:
  void OnWindowDestroying(aura::Window* window) override;
  void OnWindowOcclusionChanged(aura::Window* window) override;
  void OnWindowTitleChanged(aura::Window* window) override;

 private:
  raw_ptr<aura::Window> window_;
  raw_ptr<Delegate> delegate_;
};

}  // namespace policy

#endif  // CHROME_BROWSER_ASH_POLICY_DLP_DLP_WINDOW_OBSERVER_H_
