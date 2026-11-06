# Copyright 2019 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: ci
# title: Presubmit checks for the clang Python library
# summary: Runs the clang pylib unit tests for changed Python files as a presubmit check before commit.
# ---


def CheckChangeOnCommit(input_api, output_api):
  if not input_api.HasAffectedFiles(extensions='.py'):
    return []
  results = []

  # Run the unit tests.
  results.extend(
    input_api.canned_checks.RunUnitTestsInDirectory(
      input_api, output_api, '.', [r'^.+_test\.py$']
    )
  )

  return results
