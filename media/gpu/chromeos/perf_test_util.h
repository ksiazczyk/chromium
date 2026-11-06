// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Performance test utility header
// summary: Declares helpers for performance tests, such as output and source directory accessors and JSON metric writing.
// ---

#ifndef MEDIA_GPU_CHROMEOS_PERF_TEST_UTIL_H_
#define MEDIA_GPU_CHROMEOS_PERF_TEST_UTIL_H_

#include <string>
#include <vector>

#include "base/files/file_path.h"
#include "media/gpu/test/video_test_environment.h"

namespace media {

extern media::test::VideoTestEnvironment* g_env;
// Default output folder used to store performance metrics.
base::FilePath& GetOutputDir();
base::FilePath& GetSourceDir();

void WriteJsonResult(std::vector<std::pair<std::string, double>> data);

}  // namespace media

#endif  // MEDIA_GPU_CHROMEOS_PERF_TEST_UTIL_H_
