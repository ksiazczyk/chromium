// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ImageSkiaSource default implementation
// summary: Implements the ImageSkiaSource destructor and a default HasRepresentationAtAllScales that returns false for the gfx image module.
// ---

#include "ui/gfx/image/image_skia_source.h"

namespace gfx {

ImageSkiaSource::~ImageSkiaSource() {}

bool ImageSkiaSource::HasRepresentationAtAllScales() const { return false; }

}  // namespace gfx
