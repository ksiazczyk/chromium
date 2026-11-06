// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BrowserObserver interface
// summary: Defines the BrowserObserver interface for objects interested in Browser events, notably a callback invoked when the Browser is destroyed.
// ---

#ifndef IOS_CHROME_BROWSER_SHARED_MODEL_BROWSER_BROWSER_OBSERVER_H_
#define IOS_CHROME_BROWSER_SHARED_MODEL_BROWSER_BROWSER_OBSERVER_H_

#include "base/observer_list_types.h"

class Browser;

// Observer interface for objects interested in Browser events.
class BrowserObserver : public base::CheckedObserver {
 public:
  BrowserObserver(const BrowserObserver&) = delete;
  BrowserObserver& operator=(const BrowserObserver&) = delete;

  ~BrowserObserver() override;

  // Invoked when the Browser is being destroyed. Gives subclasses a chance
  // to cleanup.
  virtual void BrowserDestroyed(Browser* browser) {}

 protected:
  BrowserObserver() = default;
};

#endif  // IOS_CHROME_BROWSER_SHARED_MODEL_BROWSER_BROWSER_OBSERVER_H_
