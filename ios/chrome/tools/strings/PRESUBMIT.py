# Copyright 2026 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: ci
# title: Presubmit checks for the iOS strings tools
# summary: Runs the Python unit tests in this directory as a presubmit check for changes to the iOS strings tools.
# ---

"""Presubmit checks for ios/chrome/tools/strings."""

PRESUBMIT_VERSION = '2.0.0'


def CheckPythonTests(input_api, output_api):
    return input_api.RunTests(
        input_api.canned_checks.GetUnitTestsInDirectory(
            input_api,
            output_api,
            input_api.PresubmitLocalPath(),
            files_to_check=[r'^.+_test\.py$'],
        )
    )
