// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MIME handler options API test service worker
// summary: Runs a browser test verifying that setMimeHandlerOptions updates only the members passed in the call and leaves the others unchanged.
// ---

const kPdfMimeType = 'application/pdf';

function getOptions() {
  return chrome.mimeHandler.getMimeHandlerOptions(kPdfMimeType);
}

chrome.test.runTests([
  // setMimeHandlerOptions() should change only the options given in the call
  // and leave the others as they are. A call with {} should change nothing.
  async function setMimeHandlerOptionsWritesOnlyPresentMembers() {
    chrome.test.assertEq({enabled: true, canEmbed: false}, await getOptions());

    await chrome.mimeHandler.setMimeHandlerOptions(
        kPdfMimeType, {enabled: false});
    chrome.test.assertEq({enabled: false, canEmbed: false}, await getOptions());

    await chrome.mimeHandler.setMimeHandlerOptions(
        kPdfMimeType, {canEmbed: true});
    chrome.test.assertEq({enabled: false, canEmbed: true}, await getOptions());

    await chrome.mimeHandler.setMimeHandlerOptions(
        kPdfMimeType, {enabled: true});
    chrome.test.assertEq({enabled: true, canEmbed: true}, await getOptions());

    await chrome.mimeHandler.setMimeHandlerOptions(kPdfMimeType, {});
    chrome.test.assertEq({enabled: true, canEmbed: true}, await getOptions());

    chrome.test.succeed();
  },
]);
