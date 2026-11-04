// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GlobalErrorBubbleViewBase interface
// summary: Declares the abstract bubble view interface used to show and close standard global error bubbles.
// ---

#ifndef CHROME_BROWSER_UI_GLOBAL_ERROR_GLOBAL_ERROR_BUBBLE_VIEW_BASE_H_
#define CHROME_BROWSER_UI_GLOBAL_ERROR_GLOBAL_ERROR_BUBBLE_VIEW_BASE_H_

#include "base/memory/weak_ptr.h"

class BrowserWindowInterface;
class GlobalErrorWithStandardBubble;

class GlobalErrorBubbleViewBase {
 public:
  static GlobalErrorBubbleViewBase* ShowStandardBubbleView(
      BrowserWindowInterface* browser,
      const base::WeakPtr<GlobalErrorWithStandardBubble>& error);

  virtual ~GlobalErrorBubbleViewBase() = default;

  // Close the bubble view.
  virtual void CloseBubbleView() = 0;
};

#endif  // CHROME_BROWSER_UI_GLOBAL_ERROR_GLOBAL_ERROR_BUBBLE_VIEW_BASE_H_
