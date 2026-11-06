// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker script that should never execute
// summary: Service worker script targeted by the root scope registration test that logs a message it should never execute.
// ---

// This should never be executed.
console.info('SERVICE WORKER SCRIPT IS EXECUTING!!');
