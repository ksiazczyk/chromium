// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mutation observers API test background script
// summary: Background page script for the mutation observers extension API test that verifies MutationObserver records are not delivered until the chrome.windows.getAll callback exits.
// ---

window.addEventListener('DOMContentLoaded', function() {
  const body = document.body;
  const div = body.appendChild(document.createElement('div'));
  const input1 = body.appendChild(document.createElement('input'));
  const input2 = body.appendChild(document.createElement('input'));

  input1.focus();
  input1.addEventListener('blur', function() {
    div.setAttribute('baz', 'bat');
  });

  let success = false;
  let mutationsDelivered = false;

  const observer = new MutationObserver(function() {
    mutationsDelivered = true;
    if (success) {
      chrome.test.succeed();
    }
  });
  observer.observe(document, {subtree: true, attributes: true});

  // The getAll callback should be counted as a V8RecursionScope and cause
  // the delivery of MutationRecords to be delayed until it has exited.
  chrome.windows.getAll(function() {
    div.setAttribute('foo', 'bar');
    input2.focus();
    if (mutationsDelivered) {
      chrome.test.fail();
    } else {
      success = true;
    }
  });
});
