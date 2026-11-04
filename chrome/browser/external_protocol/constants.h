// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header declaring auto-launch protocol policy key constants
// summary: Declares the string constants for the protocol and allowed origins keys of the auto-launch protocols policy.
// ---

#ifndef CHROME_BROWSER_EXTERNAL_PROTOCOL_CONSTANTS_H_
#define CHROME_BROWSER_EXTERNAL_PROTOCOL_CONSTANTS_H_

namespace policy::external_protocol {

extern const char kProtocolNameKey[];

extern const char kOriginListKey[];

}  // namespace policy::external_protocol

#endif  // CHROME_BROWSER_EXTERNAL_PROTOCOL_CONSTANTS_H_
