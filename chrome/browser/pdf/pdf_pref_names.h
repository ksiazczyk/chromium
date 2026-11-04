// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PDF preference name header
// summary: Declares the PDF viewer preference name constants shared across the browser.
// ---

#ifndef CHROME_BROWSER_PDF_PDF_PREF_NAMES_H_
#define CHROME_BROWSER_PDF_PDF_PREF_NAMES_H_

namespace prefs {

extern const char kPdfLocalFileAccessAllowedForDomains[];
extern const char kPdfUseSkiaRendererEnabled[];
extern const char kPdfViewerOutOfProcessIframeEnabled[];
extern const char kPdfXfaFormsEnabled[];
extern const char kRestrictPdfSaveToGoogleDriveAccountsToPattern[];

}  // namespace prefs

#endif  // CHROME_BROWSER_PDF_PDF_PREF_NAMES_H_
