// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Composebox URL loader protocol
// summary: Declares the protocol used by the composebox to prepare for and load URL parameters.
// ---

#ifndef IOS_CHROME_BROWSER_COMPOSEBOX_COORDINATOR_COMPOSEBOX_URL_LOADER_H_
#define IOS_CHROME_BROWSER_COMPOSEBOX_COORDINATOR_COMPOSEBOX_URL_LOADER_H_

struct UrlLoadParams;

namespace lens {
class ClientToAimMessage;
}

// Protocol for loading URLs in the composebox.
@protocol ComposeboxURLLoader

// Prepares for loading with a ClientToAimMessage.
- (void)prepareLoadWithClientToAimMessage:
    (const lens::ClientToAimMessage&)message;

- (void)loadURLParams:(const UrlLoadParams&)URLLoadParams;

@end

#endif  // IOS_CHROME_BROWSER_COMPOSEBOX_COORDINATOR_COMPOSEBOX_URL_LOADER_H_
