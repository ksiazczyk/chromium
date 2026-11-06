// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test script redirecting to a URL parameter
// summary: Reads the url query parameter and redirects the browser to it, used to test the predictor's handling of JavaScript-initiated redirects.
// ---

function getUrlParameters() {
  var result = {};
  var parts = window.location.search.substring(1).split('&');
  for (var i = 0; i < parts.length; i++) {
    var pair = parts[i].split('=');
    result[pair[0]] = decodeURIComponent(pair[1]);
  }
  return result;
}

var params = getUrlParameters();
var redirectUrl = params["url"];
location.href = redirectUrl;
