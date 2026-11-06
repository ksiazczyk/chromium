// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script used in the NTP injection test
// summary: Minimal content script that sets the document title to 'injected', used as the injection target in the NTP test.
// ---

document.title = 'injected';
