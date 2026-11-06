# Copyright 2022 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: flake_suppressor package initialization
# summary: Initializes the flake_suppressor package and sets up telemetry, testing, and typ import paths via gpu_path_util.
# ---

from gpu_path_util import setup_telemetry_paths  # pylint: disable=unused-import  # noqa: F401
from gpu_path_util import setup_testing_paths  # pylint: disable=unused-import  # noqa: F401
from gpu_path_util import setup_typ_paths  # pylint: disable=unused-import  # noqa: F401
