// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Geolocation test script
// summary: Requests the current geolocation position via the Geolocation API and logs the result for content setting bubble tests.
// ---

function geolocate() {
  navigator.geolocation.getCurrentPosition(function (p) {
      console.log("result: " + p);
  });
};
