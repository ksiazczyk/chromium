# Copyright 2022 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: script
# title: Typ path setup script
# summary: Adds Catapult's third-party typ directory to sys.path so GPU tests can use the typ test runner.
# ---

import gpu_path_util

gpu_path_util.AddDirToPathIfNeeded(
  gpu_path_util.CATAPULT_DIR, 'third_party', 'typ'
)
