// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test script adding subresources via document.write
// summary: JavaScript that injects an image, a stylesheet, and a script using document.write for predictor tests.
// ---

document.write('<img src="/handled-by-test/image.png">');
document.write('<link rel="stylesheet" href="/handled-by-test/style.css">');
document.write('<script src="/handled-by-test/script.js"></script>');
