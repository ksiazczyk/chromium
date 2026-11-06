// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is for including headers that are not included in any other .cc
// files contained with the ui/gfx module.  We need to include these here so
// that linker will know to include the symbols, defined by these headers, in
// the resulting dynamic library (gfx.dll).

// ---docerion
// type: source
// title: Linker anchor for ui/gfx dynamic library symbols
// summary: Includes headers not referenced by other translation units so the linker keeps their symbols in the gfx dynamic library.
// ---

#include "ui/gfx/vsync_provider.h"
