// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Namespace renaming expected output
// summary: Expected Chrome-style result showing functions in blink and WTF namespaces renamed to PascalCase while blocklisted and outer namespaces stay unchanged.
// ---

namespace blink {

// Stuff in blink:: should be renamed.
void Foo();

// Stuff in nested namespaces should be renamed.
namespace nested {
void Foo();
}  // namespace nested

// blink::protocol namespace is blocklisted.
namespace protocol {
void foo();
}  // namespace protocol

}  // namespace blink

namespace WTF {

// Stuff in WTF:: should be renamed.
void Foo();

// Stuff in nested namespaces should be renamed.
namespace nested {
void Foo();
}  // namespace nested

}  // namespace WTF

// Stuff outside blink:: and WTF:: should not be.
namespace other {
void foo();
namespace blink {
void foo();
}  // namespace blink
namespace WTF {
void foo();
}  // namespace WTF
}  // namespace other
void foo();

void G() {
  blink::Foo();
  blink::nested::Foo();
  WTF::Foo();
  WTF::nested::Foo();
  other::foo();
  foo();
  other::blink::foo();
  other::WTF::foo();
}
