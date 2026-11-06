// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Swift entry point for the content process extension
// summary: Defines the @main ContentProcess class implementing WebContentExtension, wiring XPC connections and the restricted sandbox to the bridge.
// ---

import BrowserEngineKit
import ExtensionFoundation
import Foundation

@main
class ContentProcess: NSObject, ChildProcessExtension, WebContentExtension {
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
