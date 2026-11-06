// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Picture-in-Picture lazy background page test background script
// summary: Background script for the lazy background page Picture-in-Picture API test that loads a test video and enters or exits Picture-in-Picture, reporting progress via test messages.
// ---

const video = document.createElement('video');

function loadVideo() {
  chrome.test.getConfig(function(config) {
    video.src =
        'http://localhost:' + config.testServer.port + '/media/bigbuck.webm';
    video.load();
    video.addEventListener('loadedmetadata', function() {
      chrome.test.sendMessage('video_loaded');
    });
  });
}

function enterPictureInPicture() {
  video.requestPictureInPicture()
      .then(pipWindow => {
        if (pipWindow.width === 0 || pipWindow.height === 0) {
          return Promise.reject('Picture-in-Picture window size is not set.');
        }
        chrome.test.sendMessage('entered_pip');
      })
      .catch(error => {
        console.info(error.message);
      });
}

function exitPictureInPicture() {
  document.exitPictureInPicture().catch(error => {
    console.info(error.message);
  });
}
