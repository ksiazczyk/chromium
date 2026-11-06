// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Storage event trigger script
// summary: Writes a timestamp to chrome.storage.sync so the storage.onChanged event fires for the events test.
// ---

chrome.storage.sync.set({foo: new Date().getTime()});
