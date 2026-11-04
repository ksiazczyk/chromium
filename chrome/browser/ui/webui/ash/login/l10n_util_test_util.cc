// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock input method manager for l10n util tests (implementation)
// summary: Implements a mock input method manager that lets tests add fake input methods for the ChromeOS login localization utility.
// ---

#include "chrome/browser/ui/webui/ash/login/l10n_util_test_util.h"

#include <optional>
#include <vector>

#include "url/gurl.h"

namespace ash {

MockInputMethodManagerWithInputMethods::
    MockInputMethodManagerWithInputMethods() = default;

MockInputMethodManagerWithInputMethods::
    ~MockInputMethodManagerWithInputMethods() = default;

void MockInputMethodManagerWithInputMethods::AddInputMethod(
    const std::string& id,
    const std::string& layout,
    const std::string& language_code) {
  std::vector<std::string> languages;
  languages.push_back(language_code);
  descriptors_.push_back(input_method::InputMethodDescriptor(
      id, std::string(), std::string(), layout, languages, true, GURL(), GURL(),
      /*handwriting_language=*/std::nullopt));
}

}  // namespace ash
