// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ExtractionProperties struct implementation
// summary: Provides the default constructor, move constructor and destructor definitions for the ExtractionProperties struct.
// ---

#include "chrome/browser/extensions/api/image_writer_private/extraction_properties.h"

namespace extensions {
namespace image_writer {

ExtractionProperties::ExtractionProperties() = default;
ExtractionProperties::ExtractionProperties(ExtractionProperties&&) = default;
ExtractionProperties::~ExtractionProperties() = default;

}  // namespace image_writer
}  // namespace extensions
