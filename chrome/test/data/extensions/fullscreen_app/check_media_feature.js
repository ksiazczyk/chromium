// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fullscreen display-mode media query check
// summary: "Page script that tests matchMedia('(display-mode: fullscreen)') and shows the result in green or red text on the page."
// ---

const fullscreen = matchMedia('(display-mode: fullscreen)');
const p = document.createElement('p');
document.body.appendChild(p);
if (fullscreen.matches) {
  p.innerHTML = '(display-mode: fullscreen) matches.';
  p.style.color = 'green';
} else {
  p.innerHTML = '(display-mode: fullscreen) does not match.';
  p.style.color = 'red';
}
