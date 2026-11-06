// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test script injecting image, CSS and script via innerHTML
// summary: Injects an image, a stylesheet and a script into the page via innerHTML to exercise predictor handling of dynamically added subresources.
// ---

document.getElementById("img").innerHTML =
  '<img src="/handled-by-test/image.png">';
document.getElementById("css").innerHTML =
  '<link rel="stylesheet" href="/handled-by-test/style.css">';
document.getElementById("js").innerHTML =
  '<script src="/handled-by-test/script.js"></script>';
