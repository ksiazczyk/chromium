// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WebUSB device enumeration worker for back/forward cache test
// summary: Test worker that calls navigator.usb.getDevices() and posts back the number of connected USB devices found.
// ---

onmessage = async () => {
  let devices = await navigator.usb.getDevices();
  postMessage("Found " + devices.length + " devices");
}
