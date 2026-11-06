// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Translate constants definitions
// summary: Defines shared translate constants such as partial translate text selection limits, bubble show delay, PDF MIME type, and reading mode side panel host.
// ---

#include "components/translate/core/common/translate_constants.h"

namespace translate {

const int kDesktopPartialTranslateTextSelectionMaxCharacters = 500;

const int kDesktopPartialTranslateBubbleShowDelayMs = 500;

const char kPdfMimeType[] = "application/pdf";
const char kReadingModeSidePanelHost[] = "read-anything-side-panel.top-chrome";

}  // namespace translate
