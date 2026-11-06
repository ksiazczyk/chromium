// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Dialog test helper functions
// summary: Declares helper functions to accept or cancel a dialog widget in Views tests.
// ---

#ifndef UI_VIEWS_TEST_DIALOG_TEST_H_
#define UI_VIEWS_TEST_DIALOG_TEST_H_

namespace views {

class Widget;

namespace test {

void AcceptDialog(Widget* widget);
void CancelDialog(Widget* widget);

}  // namespace test
}  // namespace views

#endif  // UI_VIEWS_TEST_DIALOG_TEST_H_
