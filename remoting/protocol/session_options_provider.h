// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SessionOptionsProvider interface
// summary: Interface that exposes the session options for the current session to protocol code.
// ---

#ifndef REMOTING_PROTOCOL_SESSION_OPTIONS_PROVIDER_H_
#define REMOTING_PROTOCOL_SESSION_OPTIONS_PROVIDER_H_

namespace remoting {

struct SessionOptions;

namespace protocol {

// Interface for getting session options for the current session.
class SessionOptionsProvider {
 public:
  ~SessionOptionsProvider() = default;

  // Returns session options for the current session.
  virtual const SessionOptions& session_options() const = 0;
};

}  // namespace protocol
}  // namespace remoting

#endif  // REMOTING_PROTOCOL_SESSION_OPTIONS_PROVIDER_H_
