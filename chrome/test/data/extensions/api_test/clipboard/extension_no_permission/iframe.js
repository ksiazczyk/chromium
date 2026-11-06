// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Iframe clipboard command helper
// summary: Runs an execCommand copy or paste inside an iframe and reports the outcome to the parent test page.
// ---

parent.testDone(document.execCommand(parent.command));
