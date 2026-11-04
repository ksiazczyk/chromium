// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Touch To Fill password manager view factory header
// summary: Declares the TouchToFillPasswordManagerViewFactory class whose Create method builds the Touch To Fill view for a given controller.
// ---

#ifndef CHROME_BROWSER_TOUCH_TO_FILL_PASSWORD_MANAGER_TOUCH_TO_FILL_PASSWORD_MANAGER_VIEW_FACTORY_H_
#define CHROME_BROWSER_TOUCH_TO_FILL_PASSWORD_MANAGER_TOUCH_TO_FILL_PASSWORD_MANAGER_VIEW_FACTORY_H_

#include <memory>

class TouchToFillPasswordManagerView;
class TouchToFillPasswordManagerController;

class TouchToFillPasswordManagerViewFactory {
 public:
  static std::unique_ptr<TouchToFillPasswordManagerView> Create(
      TouchToFillPasswordManagerController* controller);
};

#endif  // CHROME_BROWSER_TOUCH_TO_FILL_PASSWORD_MANAGER_TOUCH_TO_FILL_PASSWORD_MANAGER_VIEW_FACTORY_H_
