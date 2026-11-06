// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ReaderModeBrowserAgent delegate protocol
// summary: Declares the Objective-C protocol for showing and hiding Reader mode content on behalf of the browser agent.
// ---

#ifndef IOS_CHROME_BROWSER_READER_MODE_MODEL_READER_MODE_BROWSER_AGENT_DELEGATE_H_
#define IOS_CHROME_BROWSER_READER_MODE_MODEL_READER_MODE_BROWSER_AGENT_DELEGATE_H_

#import <Foundation/Foundation.h>

class ReaderModeBrowserAgent;

// Delegate for ReaderModeBrowserAgent.
@protocol ReaderModeBrowserAgentDelegate

// Shows the reader mode content.
- (void)readerModeBrowserAgent:(ReaderModeBrowserAgent*)browserAgent
           showContentAnimated:(BOOL)animated;

// Hides the reader mode content.
- (void)readerModeBrowserAgent:(ReaderModeBrowserAgent*)browserAgent
           hideContentAnimated:(BOOL)animated;

@end

#endif  // IOS_CHROME_BROWSER_READER_MODE_MODEL_READER_MODE_BROWSER_AGENT_DELEGATE_H_
