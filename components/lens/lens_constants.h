// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Lens image search size constants
// summary: Defines the maximum area and maximum pixel width and height for images sent to Lens image search.
// ---

#ifndef COMPONENTS_LENS_LENS_CONSTANTS_H_
#define COMPONENTS_LENS_LENS_CONSTANTS_H_

namespace lens {

// The max area for the image to be sent to Lens.
inline constexpr int kMaxAreaForImageSearch = 1'000'000;

// The max pixel width/height for the image to be sent to Lens.
inline constexpr int kMaxPixelsForImageSearch = 1000;

}  // namespace lens

#endif  // COMPONENTS_LENS_LENS_CONSTANTS_H_
