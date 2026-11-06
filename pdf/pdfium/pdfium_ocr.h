// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PDFium OCR helpers header
// summary: Declares helpers that get image bounds and rendered images from PDF pages for OCR.
// ---

#ifndef PDF_PDFIUM_PDFIUM_OCR_H_
#define PDF_PDFIUM_PDFIUM_OCR_H_

#include "third_party/pdfium/public/fpdfview.h"
#include "third_party/skia/include/core/SkBitmap.h"
#include "ui/gfx/geometry/size_f.h"

namespace chrome_pdf {

SkBitmap GetImageForOcr(FPDF_DOCUMENT doc,
                        FPDF_PAGE page,
                        FPDF_PAGEOBJECT page_object,
                        uint32_t max_image_dimension);

// Returns image bound's size in PDF coordinates. Returns (0,0) if fails.
gfx::SizeF GetImageSize(FPDF_PAGEOBJECT page_object);

}  // namespace chrome_pdf

#endif  // PDF_PDFIUM_PDFIUM_OCR_H_
