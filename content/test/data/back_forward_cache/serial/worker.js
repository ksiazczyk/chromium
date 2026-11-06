// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Serial port counting worker for back/forward cache test
// summary: Test fixture worker that queries navigator.serial.getPorts() and posts back the number of available serial ports for a back/forward cache test.
// ---

onmessage = async () => {
  let ports = await navigator.serial.getPorts();
  postMessage("Found " + ports.length + " ports");
}
