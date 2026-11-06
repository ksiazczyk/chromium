// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Audio playback test script
// summary: Test script that plays the packaged bear.wav resource and signals pass once the audio can play.
// ---

const audio = document.createElement('audio');
audio.oncanplay = () => {
  chrome.test.notifyPass();
};
audio.src = chrome.runtime.getURL('bear.wav');
document.body.appendChild(audio);
