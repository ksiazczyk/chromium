# Copyright 2022 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: script
# title: Tools perf path setup script
# summary: Adds the Chromium tools/perf directory to sys.path for GPU test runs.
# ---

import gpu_path_util

gpu_path_util.AddDirToPathIfNeeded(gpu_path_util.TOOLS_PERF_DIR)
