# Copyright 2021 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: script
# title: Presubmit checks for code coverage merge scripts
# summary: Presubmit script that runs the directory's *_test.py unit tests via depot_tools canned checks on upload and commit.
# ---

"""Presubmit script for testing/merge_scripts/code_coverage.

See http://dev.chromium.org/developers/how-tos/depottools/presubmit-scripts
for more details about the presubmit API built into depot_tools.
"""


def CommonChecks(input_api, output_api):
  return input_api.canned_checks.RunUnitTestsInDirectory(
    input_api, output_api, '.', [r'^.+_test\.py$']
  )


def CheckChangeOnUpload(input_api, output_api):
  return CommonChecks(input_api, output_api)


def CheckChangeOnCommit(input_api, output_api):
  return CommonChecks(input_api, output_api)
