// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: XHR download script for the url handler test app
// summary: JavaScript that fetches target.html via XMLHttpRequest and reports success or failure on the page.
// ---

(function() {
  var href =
      '/extensions/platform_apps/url_handlers/xhr_downloader/target.html';
  var xhr = new XMLHttpRequest();
  xhr.onload = function() {
    document.querySelector('body').innerText =
        'XHR succeeded:\n' + xhr.responseText;
    document.title = "XHR succeeded";
  };
  xhr.onerror = function() {
    document.querySelector('body').innerText =
        'XHR failed with status ' + xhr.status;
    document.title = "XHR failed";
  }
  xhr.open('GET', href, true);
  xhr.send();
})();
