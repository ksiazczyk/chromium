// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Dedicated worker URL test script
// summary: Dedicated worker script that posts its location URL back, used to verify worker script URL handling.
// ---

postMessage(location.href);
