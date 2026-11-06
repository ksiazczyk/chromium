// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Blocklisted directories test source
// summary: 'Test source using #line directives to verify the plugin skips warnings for files in blocklisted directories.'
// ---

struct Base {
  virtual void foo();
};

#line 1 "/src/chromium/src/myheader.h"
struct Derived : public Base {
  virtual void foo();  // Should warn about missing 'override'.
};

#line 123 "/src/chrome-breakpad/src/myheader.h"
struct Derived2 : public Base {
  virtual void foo();  // Should warn about missing 'override'.
};

#line 123 "/src/chrome-breakpad/src/breakpad/myheader.h"
struct Derived3 : public Base {
  virtual void foo();  // Should not warn; file is in a blocklisted dir.
};
