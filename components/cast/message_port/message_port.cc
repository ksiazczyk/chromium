// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MessagePort base class implementation
// summary: Provides destructors for the cast_api_bindings MessagePort interface and its nested Receiver class.
// ---

#include "components/cast/message_port/message_port.h"

namespace cast_api_bindings {

MessagePort::Receiver::~Receiver() = default;
MessagePort::~MessagePort() = default;

}  // namespace cast_api_bindings