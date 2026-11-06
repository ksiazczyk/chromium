// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: PDFium ink reader fuzz test
// summary: Fuzz test that verifies mesh creation from polylines of finite ink points does not crash.
// ---

#include "pdf/pdfium/pdfium_ink_reader.h"

#include "base/containers/span.h"
#include "third_party/fuzztest/src/fuzztest/fuzztest.h"
#include "third_party/ink/src/ink/geometry/point.h"

namespace chrome_pdf {

namespace {

fuzztest::Domain<ink::Point> FiniteInkPoint() {
  return fuzztest::StructOf<ink::Point>(fuzztest::Finite<float>(),
                                        fuzztest::Finite<float>());
}

void CreateMeshFromPolylineDoesntCrash(base::span<const ink::Point> polyline) {
  auto mesh = CreateInkMeshFromPolylineForTesting(polyline);
}

}  // namespace

FUZZ_TEST(PdfInkReaderFuzzer, CreateMeshFromPolylineDoesntCrash)
    .WithDomains(fuzztest::VectorOf(FiniteInkPoint()));

}  // namespace chrome_pdf
