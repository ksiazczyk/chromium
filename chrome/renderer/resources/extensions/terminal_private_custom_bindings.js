// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Terminal Private custom bindings
// summary: Custom bindings for the chrome.terminalPrivate API that acknowledge process output events after dispatching the onProcessOutput listener arguments.
// ---

// Custom bindings for chrome.terminalPrivate API.
bindingUtil.registerEventArgumentMassager(
    'terminalPrivate.onProcessOutput', function(args, dispatch) {
      const terminalId = args[0];
      try {
        dispatch(args);
      } finally {
        chrome.terminalPrivate.ackOutput(terminalId);
      }
    });
