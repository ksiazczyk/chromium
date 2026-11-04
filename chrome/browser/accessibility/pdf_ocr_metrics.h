// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PDF OCR metrics header
// summary: Declares a helper function in the accessibility namespace that records metrics for PDF OCR in the Chrome browser.
// ---

#ifndef CHROME_BROWSER_ACCESSIBILITY_PDF_OCR_METRICS_H_
#define CHROME_BROWSER_ACCESSIBILITY_PDF_OCR_METRICS_H_

// This file contains a helper function to record metrics for PDF OCR.
namespace accessibility {

void RecordPDFOpenedWithA11yFeatureWithPdfOcr();

}  // namespace accessibility

#endif  // CHROME_BROWSER_ACCESSIBILITY_PDF_OCR_METRICS_H_
