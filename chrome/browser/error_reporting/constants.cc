// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: JavaScript stack key constant definition
// summary: Defines the Chrome OS key used to pass the JavaScript stack payload to crash_reporter.
// ---

#include "chrome/browser/error_reporting/constants.h"

#if BUILDFLAG(IS_CHROMEOS)
const char kJavaScriptStackKey[] = "upload_file_js_stack\"; filename=\"stack\"";
#endif
