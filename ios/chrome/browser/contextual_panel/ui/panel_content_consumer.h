// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PanelContentConsumer protocol
// summary: Defines the consumer protocol for the panel content view, alerting consumers when the bottom toolbar's expanded height changes.
// ---

#ifndef IOS_CHROME_BROWSER_CONTEXTUAL_PANEL_UI_PANEL_CONTENT_CONSUMER_H_
#define IOS_CHROME_BROWSER_CONTEXTUAL_PANEL_UI_PANEL_CONTENT_CONSUMER_H_

// Consumer protocol for the Panel Content view.
@protocol PanelContentConsumer <NSObject>

// Alerts the consumer that the bottom toolbar has changed its expanded height.
- (void)updateBottomToolbarHeight:(CGFloat)height;

@end

#endif  // IOS_CHROME_BROWSER_CONTEXTUAL_PANEL_UI_PANEL_CONTENT_CONSUMER_H_
