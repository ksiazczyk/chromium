// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Remote WebAuthn entry point
// summary: Minimal main() entry point that delegates to RemoteWebAuthnMain to start the remote WebAuthn native messaging host process.
// ---

#include "remoting/host/webauthn/remote_webauthn_main.h"

int main(int argc, char** argv) {
  return remoting::RemoteWebAuthnMain(argc, argv);
}
