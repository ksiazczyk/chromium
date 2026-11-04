// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebUI syslog emitter helper
// summary: TypeScript module that lets WebUIs emit SYSLOG messages directly, exposing loginSyslog and forwarding prefixed messages through the WebUiSyslogEmitter mojo remote.
// ---

import {WebUiSyslogEmitter, WebUiSyslogEmitterRemote} from './webui_syslog_emitter.mojom-webui.js';

// This file provides a way to emit SYSLOGs directly from a WebUI.
//
// From base/syslog_logging.h:
//   "Keep in mind that the syslog is always active regardless of the logging
//    level and applied flags. Use only for important information that a system
//    administrator might need to maintain the browser installation."

export function loginSyslog(message: string): void {
  syslogRequest(message, '(LOGIN)(WebUI)');
}

function syslogRequest(message: string, prefix: string): void {
  remote.emitSyslog(prefix, message);
}

let remote: WebUiSyslogEmitterRemote = WebUiSyslogEmitter.getRemote();
