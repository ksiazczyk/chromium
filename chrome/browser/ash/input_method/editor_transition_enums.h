// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Editor transition enums
// summary: Defines the EditorNoticeTransitionAction enum describing actions such as showing the editor panel or doing nothing after a notice.
// ---

#ifndef CHROME_BROWSER_ASH_INPUT_METHOD_EDITOR_TRANSITION_ENUMS_H_
#define CHROME_BROWSER_ASH_INPUT_METHOD_EDITOR_TRANSITION_ENUMS_H_

namespace ash::input_method {

enum class EditorNoticeTransitionAction {
  kShowEditorPanel,
  kDoNothing,
};

}  // namespace ash::input_method

#endif  // CHROME_BROWSER_ASH_INPUT_METHOD_EDITOR_TRANSITION_ENUMS_H_
