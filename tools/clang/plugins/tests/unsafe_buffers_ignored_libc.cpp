// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Ignored libc calls test source
// summary: C++ test case calling atoi through a template to cover ignored libc calls in the unsafe buffers check.
// ---

extern "C" int atoi(const char*);

template <typename T>
void call_atoi(const T* p) {
  atoi(p);
}

void foo(const char* p) {
  call_atoi(p);
}
