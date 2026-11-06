// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Panel script connecting to the extension runtime
// summary: Connects to the extension runtime with a named port so the test can verify messaging initiated from a panel window.
// ---

chrome.runtime.connect({name: 'test-connection'});
