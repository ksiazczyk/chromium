// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Clipboard capability test helpers
// summary: Defines window.tests helpers that use execCommand to check clipboard read and write access, including within an about:blank iframe.
// ---

(function() {

const getIframe = function() {
  return document.querySelector('iframe');
};

window.tests = {
  canReadClipboard: function() {
    return document.execCommand('paste');
  },

  canWriteClipboard: function() {
    return document.execCommand('copy');
  },

  canReadClipboardInAboutBlankFrame: function() {
    return getIframe().contentDocument.execCommand('paste');
  },

  canWriteClipboardInAboutBlankFrame: function() {
    return getIframe().contentDocument.execCommand('copy');
  },
};
}());
