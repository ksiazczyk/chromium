// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Exit codes and GPU context loss restart declaration
// summary: Declares the viz ExitCode enum and the RestartGpuProcessForContextLoss function used to restart the GPU process after context loss without a crash report.
// ---

#ifndef COMPONENTS_VIZ_SERVICE_GL_EXIT_CODE_H_
#define COMPONENTS_VIZ_SERVICE_GL_EXIT_CODE_H_

#include <string_view>

namespace viz {
enum class ExitCode {
  // Matches service_manager::ResultCode::RESULT_CODE_NORMAL_EXIT
  RESULT_CODE_NORMAL_EXIT = 0,
  // Matches chrome::ResultCode::RESULT_CODE_GPU_EXIT_ON_CONTEXT_LOST
  RESULT_CODE_GPU_EXIT_ON_CONTEXT_LOST = 34,
};

// Called to restart the GPU process on context loss. First logs a message to
// the user including `reason` and then terminates the GPU process. This does
// not produce a crash report.
void RestartGpuProcessForContextLoss(std::string_view reason);

}  // namespace viz

#endif  // COMPONENTS_VIZ_SERVICE_GL_EXIT_CODE_H_
