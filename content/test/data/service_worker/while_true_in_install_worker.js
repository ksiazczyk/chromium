// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test service worker that loops forever during install
// summary: Service worker test fixture whose oninstall handler runs an endless while(true) loop, used to exercise an install that never completes.
// ---

oninstall = function() { while(true) { } };
