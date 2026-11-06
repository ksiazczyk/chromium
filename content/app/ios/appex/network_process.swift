// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Network process app extension entry point
// summary: Swift entry point for the iOS network process app extension that initializes the child process, handles XPC connections and applies the restricted sandbox.
// ---

import BrowserEngineKit
import ExtensionFoundation
import Foundation

@main
class NetworkProcess: NSObject, ChildProcessExtension, NetworkingExtension {
  override required init() {
    super.init()
    ChildProcessStarted()
    ChildProcessInit(self)
  }

  public func handle(xpcConnection: xpc_connection_t) {
    ChildProcessHandleNewConnection(xpcConnection)
  }

  public func applySandbox() {
    self.applyRestrictedSandbox(revision: .revision1)
  }
}
