// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Native messaging message key constants
// summary: Defines shared string constants for native messaging protocol keys such as message id, message type, and the hello handshake fields.
// ---

#include "remoting/host/native_messaging/native_messaging_constants.h"

namespace remoting {

const char kMessageId[] = "id";
const char kMessageType[] = "type";

const char kHelloMessage[] = "hello";
const char kHostVersion[] = "version";
const char kSupportedFeatures[] = "supportedFeatures";
const char kHelloResponse[] = "helloResponse";

}  // namespace remoting
