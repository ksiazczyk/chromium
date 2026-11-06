# Copyright 2015 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: config
# title: GPU test project configuration
# summary: Defines the ChromiumConfig used by GPU test runners, pointing at the gpu_tests benchmark directory and setting up perf paths.
# ---

import os

import gpu_path_util

# pylint: disable=unused-import
from gpu_path_util import setup_tools_perf_paths  # noqa: F401
# pylint: enable=unused-import

# This needs to come after setup_tools_perf_paths so we can actually import
# this.
from chrome_telemetry_build import chromium_config

CONFIG = chromium_config.ChromiumConfig(
  top_level_dir=gpu_path_util.GPU_DIR,
  benchmark_dirs=[os.path.join(gpu_path_util.GPU_DIR, 'gpu_tests')],
)
