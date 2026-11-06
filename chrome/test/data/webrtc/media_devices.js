/**
 * Copyright 2014 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// ---docerion
// type: test
// title: Media device enumeration helper
// summary: Helper that enumerates available media devices on the system and returns them as JSON for browser tests.
// ---

/**
 * Queries for media devices on the current system using the getMediaDevices
 * API.
 *
 * Returns the list of devices available.
 */
function enumerateDevices() {
  return navigator.mediaDevices.enumerateDevices().then(function(devices) {
    return JSON.stringify(devices);
  });
}
