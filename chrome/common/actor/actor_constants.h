// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Actor DOM node ID constants
// summary: Defines the constant that marks DOM node ID zero as targeting the root element or viewport.
// ---

#ifndef CHROME_COMMON_ACTOR_ACTOR_CONSTANTS_H_
#define CHROME_COMMON_ACTOR_ACTOR_CONSTANTS_H_

namespace actor {

// 0 is not a valid DOMNodeId so it is used to indicate targeting the
// root/viewport.
inline constexpr int kRootElementDomNodeId = 0;

}  // namespace actor

#endif  // CHROME_COMMON_ACTOR_ACTOR_CONSTANTS_H_
