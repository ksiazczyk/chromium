# Copyright 2021 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: test
# title: Package init setting up testing paths
# summary: Package initializer that sets up testing and tools/perf import paths for the GPU unexpected passes package.
# ---

# pylint: disable=unused-import
from gpu_path_util import setup_testing_paths  # noqa: F401
from gpu_path_util import setup_tools_perf_paths  # noqa: F401
# pylint: enable=unused-import
