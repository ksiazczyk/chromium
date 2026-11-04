// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Sign-in web dialog UI implementation
// summary: Implements the SigninWebDialogUI constructor that wraps WebDialogUI for sign-in dialogs.
// ---

#include "chrome/browser/ui/webui/signin/signin_web_dialog_ui.h"

SigninWebDialogUI::SigninWebDialogUI(content::WebUI* web_ui)
    : WebDialogUI(web_ui) {}
