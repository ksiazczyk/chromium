// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Image decoding story helper
// summary: Defines drawColorfulSquares, which swaps base64 image data into an img element every 450 ms for the image decoding benchmark pages.
// ---

/* Given |array| of base64 data or image paths, this function successively
 * replaces the source of <img id="img"> with elements
 * {0, 1, ..., |numSquares| - 1} for |numSquares| from the initial call.
 * This happens every 450 ms.
 */
function drawColorfulSquares(numSquares, array) {
  if (numSquares > 0) {
    setTimeout(function() {
      var image_width = 1024;
      var image_height = 1024;
      document.getElementById('img').src = array[numSquares - 1];
      drawColorfulSquares(numSquares - 1, array);
    }, 450);
  }
}
