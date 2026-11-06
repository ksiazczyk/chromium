// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Subframe script sending ready message to the extension
// summary: Sends a ready message to the extension background once the subframe loads so the test can proceed.
// ---

chrome.runtime.sendMessage(undefined, 'ready');
