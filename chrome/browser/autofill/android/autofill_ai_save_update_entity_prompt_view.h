// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Autofill AI save/update entity prompt view interface
// summary: Defines the abstract view interface that displays the Android prompt for confirming saving or updating an address profile imported from a form submission.
// ---

#ifndef CHROME_BROWSER_AUTOFILL_ANDROID_AUTOFILL_AI_SAVE_UPDATE_ENTITY_PROMPT_VIEW_H_
#define CHROME_BROWSER_AUTOFILL_ANDROID_AUTOFILL_AI_SAVE_UPDATE_ENTITY_PROMPT_VIEW_H_

namespace autofill {

class AutofillAiSaveUpdateEntityPromptController;

// The UI interface which prompts the user to confirm saving new/updating
// existing address profile imported from a form submission.
class AutofillAiSaveUpdateEntityPromptView {
 public:
  // Shows the Android message UI to the user. Return `false` if the message
  // wasn't shown for any reason.
  virtual bool Show(
      const AutofillAiSaveUpdateEntityPromptController* controller) = 0;

  virtual ~AutofillAiSaveUpdateEntityPromptView() = default;
};

}  // namespace autofill

#endif  // CHROME_BROWSER_AUTOFILL_ANDROID_AUTOFILL_AI_SAVE_UPDATE_ENTITY_PROMPT_VIEW_H_
