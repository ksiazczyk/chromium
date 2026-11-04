// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: File upload job test environment header
// summary: Declares FileUploadJob::TestEnvironment, a RAII helper that provides a fresh manager instance for FileUploadJob tests.
// ---

#ifndef CHROME_BROWSER_POLICY_MESSAGING_LAYER_UPLOAD_FILE_UPLOAD_JOB_TEST_UTIL_H_
#define CHROME_BROWSER_POLICY_MESSAGING_LAYER_UPLOAD_FILE_UPLOAD_JOB_TEST_UTIL_H_

#include "chrome/browser/policy/messaging_layer/upload/file_upload_job.h"

namespace reporting {

class FileUploadJob::TestEnvironment {
 public:
  TestEnvironment();
  TestEnvironment(const TestEnvironment& other) = delete;
  TestEnvironment& operator=(const TestEnvironment& other) = delete;
  ~TestEnvironment();
};
}  // namespace reporting

#endif  // CHROME_BROWSER_POLICY_MESSAGING_LAYER_UPLOAD_FILE_UPLOAD_JOB_TEST_UTIL_H_
