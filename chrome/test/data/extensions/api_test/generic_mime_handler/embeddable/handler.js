// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Generic MIME Handler Embeddable Test Handler Script
// summary: Claims the MIME stream via chrome.mimeHandler.getStreamInfo() to keep the OOPIF alive while the permission embedding test inspects the frame tree.
// ---

// Claim the stream and keep the OOPIF alive. The permission embedding
// test only inspects the frame tree, so this handler does no work
// beyond binding to the stream.
chrome.mimeHandler.getStreamInfo();
