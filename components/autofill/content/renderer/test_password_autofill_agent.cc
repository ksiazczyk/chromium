// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test password autofill agent
// summary: Implements a test subclass of PasswordAutofillAgent that always allows frames to access the password manager in browser tests.
// ---

#include "components/autofill/content/renderer/test_password_autofill_agent.h"

namespace autofill {

TestPasswordAutofillAgent::TestPasswordAutofillAgent(
    content::RenderFrame* render_frame,
    blink::AssociatedInterfaceRegistry* registry)
    : PasswordAutofillAgent(render_frame, registry) {}

TestPasswordAutofillAgent::~TestPasswordAutofillAgent() = default;

bool TestPasswordAutofillAgent::FrameCanAccessPasswordManager() {
  return true;
}

}  // namespace autofill
