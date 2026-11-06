// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: NativeMessagePortDispatcher interface
// summary: Declares the dispatcher interface that NativeMessagePort uses to dispatch messages to the target native host.
// ---

#ifndef EXTENSIONS_BROWSER_API_MESSAGING_NATIVE_MESSAGE_PORT_DISPATCHER_H_
#define EXTENSIONS_BROWSER_API_MESSAGING_NATIVE_MESSAGE_PORT_DISPATCHER_H_

#include <string>

namespace extensions {

// This class is an interface used by NativeMessagePort to dispatch messages
// to the target host.
class NativeMessagePortDispatcher {
 public:
  virtual ~NativeMessagePortDispatcher() = default;

  virtual void DispatchOnMessage(const std::string& message) = 0;
};

}  // namespace extensions

#endif  // EXTENSIONS_BROWSER_API_MESSAGING_NATIVE_MESSAGE_PORT_DISPATCHER_H_
