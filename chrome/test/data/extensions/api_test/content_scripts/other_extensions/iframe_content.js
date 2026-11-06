// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: iframe_content
// summary: Test script that posts the page's content div text to the parent extension page named in the URL hash when the iframe loads.
// ---

window.addEventListener('load', function() {
  const parentExtensionPage = unescape(location.hash.replace('#', ''));

  console.info(`PAGE: Sending content to parent extension page - ${
      parentExtensionPage}`);
  window.parent.postMessage(
      document.getElementById('content').innerText, parentExtensionPage);
});
