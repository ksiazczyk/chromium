# Copyright 2026 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: ci
# title: Presubmit checks for colabutils
# summary: Presubmit script that runs the Python unit tests in this directory for changes affecting .py or .j2 files.
# ---

"""Presubmit script for tools/android/colabutils.

See http://dev.chromium.org/developers/how-tos/depottools/presubmit-scripts
for more details on the presubmit API built into depot_tools.
"""

PRESUBMIT_VERSION = '2.0.0'
USE_PYTHON3 = True


def CheckChange(input_api, output_api):
    """Runs python unittests in this directory."""

    # colabutils is not supported on Windows
    if input_api.is_windows:
        return []

    if not input_api.HasAffectedFiles(extensions=('.py', '.j2')):
        return []

    return input_api.canned_checks.RunUnitTestsInDirectory(
        input_api,
        output_api,
        input_api.PresubmitLocalPath(),
        files_to_check=[r'.+_unittest\.py$'],
    )
