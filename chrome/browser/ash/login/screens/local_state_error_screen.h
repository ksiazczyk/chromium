// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Local state error screen class declaration
// summary: Declares the LocalStateErrorScreen controller, a BaseScreen subclass that shows the local state error view and processes its user actions.
// ---

#ifndef CHROME_BROWSER_ASH_LOGIN_SCREENS_LOCAL_STATE_ERROR_SCREEN_H_
#define CHROME_BROWSER_ASH_LOGIN_SCREENS_LOCAL_STATE_ERROR_SCREEN_H_

#include "base/memory/weak_ptr.h"
#include "chrome/browser/ash/login/screens/base_screen.h"

namespace ash {

class LocalStateErrorScreenView;

class LocalStateErrorScreen : public BaseScreen {
 public:
  explicit LocalStateErrorScreen(base::WeakPtr<LocalStateErrorScreenView> view);

  LocalStateErrorScreen(const LocalStateErrorScreen&) = delete;
  LocalStateErrorScreen& operator=(const LocalStateErrorScreen&) = delete;

  ~LocalStateErrorScreen() override;

 private:
  // BaseScreen implementation:
  void ShowImpl() override;
  void HideImpl() override;
  void OnUserAction(const base::ListValue& args) override;

  base::WeakPtr<LocalStateErrorScreenView> view_;
};

}  // namespace ash

#endif  // CHROME_BROWSER_ASH_LOGIN_SCREENS_LOCAL_STATE_ERROR_SCREEN_H_
