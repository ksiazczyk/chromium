// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WTF namespace renaming test input
// summary: Input fixture with Blink/WTF-style naming in the WTF namespace, used to verify that the rewrite_to_chrome_style tool renames such code correctly.
// ---

// Make sure things in namespace WTF are also renamed.
namespace WTF {

int makingGlobalsGreatAgain = 0;

void runTheThing(int chicken) {
}

class XmlHTTPRequest {
  void sendSync();

  static const bool Foo = true;
  int m_readyState;
};

}  // namespace WTF
