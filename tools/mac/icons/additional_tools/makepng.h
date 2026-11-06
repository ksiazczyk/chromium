// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header declaring EncodePNG for makepng
// summary: Declares the EncodePNG function shared by the makepng and unmakeicns tools.
// ---

#ifndef MAKEPNG_H_
#define MAKEPNG_H_

#include <stdint.h>

bool EncodePNG(const char* input_image_path,
               const char* input_mask_path,
               const char* output_path,
               size_t dimension);

#endif  // MAKEPNG_H_
