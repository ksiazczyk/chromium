// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WebRTC peer connection test helper
// summary: Test helper script that opens and closes RTCPeerConnection instances so back/forward cache tests can exercise pages with active WebRTC connections.
// ---

let pcA;
let pcB;

function openWebRTCConnectionA() {
  return new Promise(resolve => {
    pcA = new RTCPeerConnection();
    pcA.addIceCandidate({ candidate: "test", sdpMLineIndex: 0 }).finally(()=>{
      resolve();
    });
  });
}

function openWebRTCConnectionB() {
  return new Promise(resolve => {
    pcB = new RTCPeerConnection();
    pcB.addIceCandidate({ candidate: "test", sdpMLineIndex: 0 }).finally(()=>{
      resolve();
    });
  });
}

function closeConnectionA() {
    pcA.close();
}