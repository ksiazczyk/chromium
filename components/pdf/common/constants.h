// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PDF MIME type constants
// summary: Defines constants for the internal PDF plugin MIME type and the standard PDF MIME type.
// ---

#ifndef COMPONENTS_PDF_COMMON_CONSTANTS_H_
#define COMPONENTS_PDF_COMMON_CONSTANTS_H_

namespace pdf {

// MIME type of the internal PDF plugin.
inline constexpr char kInternalPluginMimeType[] =
    "application/x-google-chrome-pdf";

// MIME type of PDFs.
inline constexpr char kPDFMimeType[] = "application/pdf";

}  // namespace pdf

#endif  // COMPONENTS_PDF_COMMON_CONSTANTS_H_
