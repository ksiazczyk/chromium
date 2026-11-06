// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ThemeProvider destructor implementation
// summary: Defines the ThemeProvider destructor out-of-line so GCC places the vtable correctly and linking succeeds.
// ---

#include "ui/base/theme_provider.h"

namespace ui {

// We have the destructor here because GCC puts the vtable in the first file
// that includes a virtual function of the class. Leaving it just in the .h file
// means that GCC will fail to link.

ThemeProvider::~ThemeProvider() {
}

}  // namespace ui
