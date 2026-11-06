// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PDF flattener implementation
// summary: Implements the PdfFlattener mojo service that flattens a PDF from shared memory via PDFium and returns the flattened result with its page count.
// ---

#include "chrome/services/printing/pdf_flattener.h"

#include <utility>

#include "base/containers/span.h"
#include "base/memory/shared_memory_mapping.h"
#include "pdf/pdf.h"

namespace printing {

PdfFlattener::PdfFlattener() = default;

PdfFlattener::~PdfFlattener() = default;

void PdfFlattener::FlattenPdf(base::ReadOnlySharedMemoryRegion src_pdf_region,
                              FlattenPdfCallback callback) {
  base::ReadOnlySharedMemoryMapping pdf_mapping = src_pdf_region.Map();
  if (!pdf_mapping.IsValid()) {
    std::move(callback).Run(nullptr);
    return;
  }

  auto input_pdf_buffer = pdf_mapping.GetMemoryAsSpan<const uint8_t>();
  std::optional<chrome_pdf::FlattenPdfResult> result =
      chrome_pdf::CreateFlattenedPdf(input_pdf_buffer);
  if (!result) {
    std::move(callback).Run(nullptr);
    return;
  }

  base::MappedReadOnlyRegion region_mapping =
      base::ReadOnlySharedMemoryRegion::Create(result->pdf.size());
  if (!region_mapping.IsValid()) {
    std::move(callback).Run(nullptr);
    return;
  }

  region_mapping.mapping.GetMemoryAsSpan<uint8_t>().copy_prefix_from(
      result->pdf);
  std::move(callback).Run(printing::mojom::FlattenPdfResult::New(
      std::move(region_mapping.region), result->page_count));
}

void PdfFlattener::SetUseSkiaRendererPolicy(bool use_skia) {
  chrome_pdf::SetUseSkiaRendererPolicy(use_skia);
}

}  // namespace printing
