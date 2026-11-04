// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebUI bubble manager observer interface
// summary: Defines WebUIBubbleManagerObserver with a BeforeBubbleWidgetShowed callback invoked after the bubble widget is created and before it is shown.
// ---

#ifndef CHROME_BROWSER_UI_VIEWS_BUBBLE_WEBUI_BUBBLE_MANAGER_OBSERVER_H_
#define CHROME_BROWSER_UI_VIEWS_BUBBLE_WEBUI_BUBBLE_MANAGER_OBSERVER_H_

#include "base/observer_list_types.h"
#include "ui/views/widget/widget.h"

class WebUIBubbleManagerObserver : public base::CheckedObserver {
 public:
  // Calls after the widget is created and before the widget is shown.
  virtual void BeforeBubbleWidgetShowed(views::Widget* widget) = 0;
};

#endif  // CHROME_BROWSER_UI_VIEWS_BUBBLE_WEBUI_BUBBLE_MANAGER_OBSERVER_H_
