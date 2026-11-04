// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Android PDF content fetcher header
// summary: Declares FetchPdfContentForWebContentsAndroid, which extracts PDF bytes from a WebContents by reading the tab's canonical file path.
// ---

#ifndef CHROME_BROWSER_PAGE_CONTENT_ANNOTATIONS_ANDROID_PDF_CONTENT_FETCHER_ANDROID_H_
#define CHROME_BROWSER_PAGE_CONTENT_ANNOTATIONS_ANDROID_PDF_CONTENT_FETCHER_ANDROID_H_

#include "components/page_content_annotations/content/page_context_fetcher.h"

namespace content {
class WebContents;
}  // namespace content

namespace page_content_annotations {

// Extracts PDF bytes from `web_contents` on Android by reading the canonical
// file path from `TabAndroid` on a background thread.
void FetchPdfContentForWebContentsAndroid(
    content::WebContents& web_contents,
    const PdfOptions& options,
    FetchPdfContentResultCallback callback);

}  // namespace page_content_annotations

#endif  // CHROME_BROWSER_PAGE_CONTENT_ANNOTATIONS_ANDROID_PDF_CONTENT_FETCHER_ANDROID_H_
