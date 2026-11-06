// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script embedding an extension iframe
// summary: Content script that creates an iframe loading the extension's iframe_content.html with microphone, camera and geolocation allow attributes for the permissions test.
// ---

const iframe = document.createElement('iframe');
iframe.name = 'iframe_with_embedded_extension';
iframe.src =
    chrome.runtime.getURL(`iframe_content.html${document.location.search}`);
iframe.allow = `microphone 'src'; camera 'src'; geolocation 'src'`;
document.body.appendChild(iframe);
