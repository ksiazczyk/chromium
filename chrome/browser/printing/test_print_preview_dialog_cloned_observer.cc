// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test print preview dialog cloned observer implementation
// summary: Implements a WebContentsObserver that installs TestPrintViewManagerForRequestPreview on WebContents cloned from a print preview dialog.
// ---

#include "test_print_preview_dialog_cloned_observer.h"

#include "chrome/browser/printing/test_print_view_manager_for_request_preview.h"
#include "content/public/browser/web_contents_observer.h"

using content::WebContents;

namespace printing {

TestPrintPreviewDialogClonedObserver::TestPrintPreviewDialogClonedObserver(
    content::WebContents* dialog)
    : content::WebContentsObserver(dialog) {}

TestPrintPreviewDialogClonedObserver::~TestPrintPreviewDialogClonedObserver() =
    default;

void TestPrintPreviewDialogClonedObserver::DidCloneToNewWebContents(
    WebContents* old_web_contents,
    WebContents* new_web_contents) {
  TestPrintViewManagerForRequestPreview::CreateForWebContents(new_web_contents);
}

}  // namespace printing
