// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Card unmask prompt view factory
// summary: Declares a factory function that creates the CardUnmaskPromptView with separate implementations for Views, Cocoa, and Android browsers.
// ---

#ifndef CHROME_BROWSER_UI_AUTOFILL_PAYMENTS_CREATE_CARD_UNMASK_PROMPT_VIEW_H_
#define CHROME_BROWSER_UI_AUTOFILL_PAYMENTS_CREATE_CARD_UNMASK_PROMPT_VIEW_H_

namespace content {
class WebContents;
}

namespace autofill {

class CardUnmaskPromptController;
class CardUnmaskPromptView;

// Factory function for CardUnmaskPromptView on non-iOS platforms. This function
// has separate implementations for Views browsers, for Cocoa browsers, and for
// Android.
CardUnmaskPromptView* CreateCardUnmaskPromptView(
    CardUnmaskPromptController* controller,
    content::WebContents* web_contents);

}  // namespace autofill

#endif  // CHROME_BROWSER_UI_AUTOFILL_PAYMENTS_CREATE_CARD_UNMASK_PROMPT_VIEW_H_
