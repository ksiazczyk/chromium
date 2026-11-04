// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Controlled Frame user agent override utility header
// summary: Declares GetDefaultControlledFrameUserAgentOverride for producing Controlled Frame user agent overrides.
// ---

#ifndef CHROME_BROWSER_CONTROLLED_FRAME_CONTROLLED_FRAME_USER_AGENT_UTIL_H_
#define CHROME_BROWSER_CONTROLLED_FRAME_CONTROLLED_FRAME_USER_AGENT_UTIL_H_

#include <optional>

namespace blink {
struct UserAgentOverride;
}  // namespace blink

namespace controlled_frame {

blink::UserAgentOverride GetDefaultControlledFrameUserAgentOverride(
    bool brand_enabled);
}

#endif  // CHROME_BROWSER_CONTROLLED_FRAME_CONTROLLED_FRAME_USER_AGENT_UTIL_H_
