// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Controlled frame events
// summary: Extends WebView events for Controlled Frame, removing unsupported events and wiring Controlled Frame web request events.
// ---

const WebViewEvents = require('webViewEvents').WebViewEvents;
const ControlledFrameWebRequest =
    require('controlledFrameWebRequest').ControlledFrameWebRequest;

class ControlledFrameEvents extends WebViewEvents {
  getEvents() {
    const webViewEvents = super.getEvents();
    delete webViewEvents['findupdate'];
    return webViewEvents;
  }

  createWebRequestEvents() {
    return new ControlledFrameWebRequest(super.createWebRequestEvents());
  }
}

// Exports.
exports.$set('ControlledFrameEvents', ControlledFrameEvents);
