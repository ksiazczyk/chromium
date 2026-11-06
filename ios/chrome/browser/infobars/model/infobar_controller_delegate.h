// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: InfoBarController delegate interface
// summary: Declares the delegate interface used to handle infobar ownership queries and infobar removal events.
// ---

#ifndef IOS_CHROME_BROWSER_INFOBARS_MODEL_INFOBAR_CONTROLLER_DELEGATE_H_
#define IOS_CHROME_BROWSER_INFOBARS_MODEL_INFOBAR_CONTROLLER_DELEGATE_H_

#import <Foundation/Foundation.h>

// Interface for delegating events from infobar.
class InfoBarControllerDelegate {
 public:
  // Returns whether the infobar is owned.
  virtual bool IsOwned() = 0;

  // Notifies that the infobar must be removed.
  virtual void RemoveInfoBar() = 0;

 protected:
  virtual ~InfoBarControllerDelegate() {}
};

#endif  // IOS_CHROME_BROWSER_INFOBARS_MODEL_INFOBAR_CONTROLLER_DELEGATE_H_
