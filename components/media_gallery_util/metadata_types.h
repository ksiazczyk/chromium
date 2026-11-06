// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Attached image metadata type
// summary: Defines the metadata namespace AttachedImage struct holding an image type and its data as strings.
// ---

#ifndef COMPONENTS_MEDIA_GALLERY_UTIL_METADATA_TYPES_H_
#define COMPONENTS_MEDIA_GALLERY_UTIL_METADATA_TYPES_H_

#include <string>

namespace metadata {

struct AttachedImage {
  std::string type;
  std::string data;
};

}  // namespace metadata

#endif  // COMPONENTS_MEDIA_GALLERY_UTIL_METADATA_TYPES_H_
