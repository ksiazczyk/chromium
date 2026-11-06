// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DevTools handler helpers header
// summary: Declares FrameTreeNodeFromDevToolsFrameToken, a helper that maps a DevTools frame token to its FrameTreeNode.
// ---

#ifndef CONTENT_BROWSER_DEVTOOLS_PROTOCOL_HANDLER_HELPERS_H_
#define CONTENT_BROWSER_DEVTOOLS_PROTOCOL_HANDLER_HELPERS_H_

#include <string>

namespace content {

class FrameTreeNode;

namespace protocol {

FrameTreeNode* FrameTreeNodeFromDevToolsFrameToken(
    FrameTreeNode* root,
    const std::string& devtools_frame_token);
}  // namespace protocol
}  // namespace content

#endif  // CONTENT_BROWSER_DEVTOOLS_PROTOCOL_HANDLER_HELPERS_H_
