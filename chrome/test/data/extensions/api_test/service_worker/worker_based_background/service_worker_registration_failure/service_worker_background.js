// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker background script that throws an error
// summary: Deliberately throws an error on load so the test can verify service worker registration failure handling.
// ---

throw new Error('lol');
