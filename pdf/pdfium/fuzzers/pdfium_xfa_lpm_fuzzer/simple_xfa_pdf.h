// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CreateSimpleXfaPdf declaration
// summary: Declares CreateSimpleXfaPdf, which wraps an XFA string in a simple PDF document.
// ---

#ifndef PDF_PDFIUM_FUZZERS_PDFIUM_XFA_LPM_FUZZER_SIMPLE_XFA_PDF_H_
#define PDF_PDFIUM_FUZZERS_PDFIUM_XFA_LPM_FUZZER_SIMPLE_XFA_PDF_H_

#include <string>

namespace pdfium_xfa_lpm_fuzzer {

std::string CreateSimpleXfaPdf(const std::string& xfa_string);

}  // namespace pdfium_xfa_lpm_fuzzer

#endif  // PDF_PDFIUM_FUZZERS_PDFIUM_XFA_LPM_FUZZER_SIMPLE_XFA_PDF_H_
