// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Options script closing its own window
// summary: Script that immediately calls window.close() so the test can check whether the close event is propagated to the options page embedder.
// ---

window.close();
