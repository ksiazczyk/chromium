// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Alternate game image data lookup API
// summary: Declares functions to count alternate images and look up obfuscated image data by id and scale.
// ---

#ifndef COMPONENTS_ERROR_PAGE_COMMON_ALT_GAME_IMAGE_DATA_H_
#define COMPONENTS_ERROR_PAGE_COMMON_ALT_GAME_IMAGE_DATA_H_

#include <string>

namespace error_page {

size_t CountAlternateImages();
bool LookupObfuscatedImage(int id, int scale, std::string* image);

}  // namespace error_page

#endif  // COMPONENTS_ERROR_PAGE_COMMON_ALT_GAME_IMAGE_DATA_H_
