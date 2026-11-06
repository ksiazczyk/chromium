// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Gemini chat message handler protocol
// summary: Defines a protocol that intercepts user chat messages before they are sent to Gemini, for example to route them as answers to an ongoing clarification request.
// ---

#ifndef IOS_CHROME_BROWSER_INTELLIGENCE_BWG_MODEL_GEMINI_CHAT_MESSAGE_HANDLER_H_
#define IOS_CHROME_BROWSER_INTELLIGENCE_BWG_MODEL_GEMINI_CHAT_MESSAGE_HANDLER_H_

#import <Foundation/Foundation.h>

@class GeminiChatMessageRequest;
@class GeminiChatMessageResponse;

// Handles chat messages submitted by the user before they are sent to Gemini,
// e.g. to route them to an ongoing task as the answer to a clarification
// request.
@protocol GeminiChatMessageHandler <NSObject>

// Decides whether `request` is consumed. Calls `completion` exactly once, on
// the main thread, and currently synchronously as the Gemini SDK does not yet
// support asynchronous interception.
- (void)handleChatMessageRequest:(GeminiChatMessageRequest*)request
                      completion:(void (^)(GeminiChatMessageResponse* response))
                                     completion;

@end

#endif  // IOS_CHROME_BROWSER_INTELLIGENCE_BWG_MODEL_GEMINI_CHAT_MESSAGE_HANDLER_H_
