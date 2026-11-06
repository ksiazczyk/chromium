// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Failing BiDi mapper test stub
// summary: Test BiDi mapper stub that immediately throws a custom error when loaded, exercising mapper error handling.
// ---

throw new Error("custom bidi mapper error from test_bidi_mapper.js");
