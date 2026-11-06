// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Direct Sockets API availability checks
// summary: Script that checks whether TCPSocket and UDPSocket are defined for the Direct Sockets policy test.
// ---

'use strict';

async function mockTcp() {
  return typeof TCPSocket !== 'undefined';
}

async function mockUdp() {
  return typeof UDPSocket !== 'undefined';
}
