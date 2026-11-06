// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Container ptr fields enforcement test source
// summary: Test source expecting no diagnostics because MyOtherContainer is not listed in the config's included types.
// ---

template <typename T>
struct MyOtherContainer {};

template <typename T>
struct BugTest {
  // No error expected because MyOtherContainer is not in included_types.
  MyOtherContainer<T*> bug_member;
};
