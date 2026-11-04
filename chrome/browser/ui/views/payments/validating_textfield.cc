// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Validating textfield implementation
// summary: Implements ValidatingTextfield, a views::Textfield subclass that validates and optionally formats its contents via a delegate on blur and keystrokes.
// ---

#include "chrome/browser/ui/views/payments/validating_textfield.h"

#include <utility>

#include "ui/base/metadata/metadata_impl_macros.h"

namespace payments {

ValidatingTextfield::ValidatingTextfield(
    std::unique_ptr<ValidationDelegate> delegate)
    : delegate_(std::move(delegate)) {}

ValidatingTextfield::~ValidatingTextfield() = default;

void ValidatingTextfield::OnBlur() {
  Textfield::OnBlur();
  was_blurred_ = true;

  // Do not validate if the view is being removed.
  if (!being_removed_) {
    Validate();
  }

  if (!GetText().empty() && delegate_->ShouldFormat()) {
    SetText(delegate_->Format(GetText()));
  }
}

void ValidatingTextfield::ViewHierarchyChanged(
    const views::ViewHierarchyChangedDetails& details) {
  if (details.child == this && !details.is_add) {
    being_removed_ = true;
  }
}

void ValidatingTextfield::OnContentsChanged() {
  // This is called on every keystroke.
  if (!GetText().empty() && GetCursorPosition() == GetText().length() &&
      delegate_->ShouldFormat()) {
    SetText(delegate_->Format(GetText()));
  }

  Validate();
}

bool ValidatingTextfield::IsValid() {
  std::u16string unused;
  return delegate_->IsValidTextfield(this, &unused);
}

void ValidatingTextfield::Validate() {
  // TextfieldValueChanged may have side-effects, such as displaying errors.
  SetInvalid(!delegate_->TextfieldValueChanged(this, was_blurred_));
}

BEGIN_METADATA(ValidatingTextfield)
END_METADATA

}  // namespace payments
