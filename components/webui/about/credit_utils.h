// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header declaring the GetCredits utility
// summary: Declares the about_ui GetCredits function, which returns the credits HTML with optional script includes.
// ---

#ifndef COMPONENTS_WEBUI_ABOUT_CREDIT_UTILS_H_
#define COMPONENTS_WEBUI_ABOUT_CREDIT_UTILS_H_

#include <string>

namespace about_ui {

// Decode a Brotli compressed HTML license file and attach .js files.
std::string GetCredits(bool include_scripts);

}  // namespace about_ui

#endif  // COMPONENTS_WEBUI_ABOUT_CREDIT_UTILS_H_
