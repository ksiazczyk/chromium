// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BrowserMain function declaration
// summary: Declares the BrowserMain entry point that runs the browser process with the given main function parameters.
// ---

#ifndef CONTENT_BROWSER_BROWSER_MAIN_H_
#define CONTENT_BROWSER_BROWSER_MAIN_H_

namespace content {

struct MainFunctionParams;

int BrowserMain(content::MainFunctionParams parameters);

}  // namespace content

#endif  // CONTENT_BROWSER_BROWSER_MAIN_H_
