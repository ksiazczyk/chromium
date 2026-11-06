// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TextSearch function declaration
// summary: Declares the TextSearch helper that returns the start index and length of each match when searching a needle within PDF text.
// ---

#ifndef PDF_TEXT_SEARCH_H_
#define PDF_TEXT_SEARCH_H_

#include <string>
#include <vector>

#include "pdf/pdfium/pdfium_engine_client.h"

namespace chrome_pdf {

std::vector<PDFiumEngineClient::SearchStringResult> TextSearch(
    const std::u16string& needle,
    const std::u16string& haystack,
    bool case_sensitive);

}  // namespace chrome_pdf

#endif  // PDF_TEXT_SEARCH_H_
