// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Crash upload list factory declaration
// summary: Declares the CreateCrashUploadList factory that creates the platform-specific crash report upload list.
// ---

#ifndef CHROME_BROWSER_CRASH_UPLOAD_LIST_CRASH_UPLOAD_LIST_H_
#define CHROME_BROWSER_CRASH_UPLOAD_LIST_CRASH_UPLOAD_LIST_H_

#include "base/memory/scoped_refptr.h"
#include "components/upload_list/upload_list.h"

// Factory that creates the platform-specific implementation of the crash
// report upload list.
scoped_refptr<UploadList> CreateCrashUploadList();

#endif  // CHROME_BROWSER_CRASH_UPLOAD_LIST_CRASH_UPLOAD_LIST_H_
