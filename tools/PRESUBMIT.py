# Copyright 2022 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: ci
# title: Presubmit checks for the tools directory
# summary: Runs Python unit tests and Ruff lint checks on changed files during Chromium presubmit.
# ---

PRESUBMIT_VERSION = '2.0.0'


def CheckPythonTests(input_api, output_api):
  if not input_api.HasAffectedFiles(extensions='.py'):
    return []
  return input_api.RunTests(
    input_api.canned_checks.GetUnitTestsInDirectory(
      input_api,
      output_api,
      input_api.PresubmitLocalPath(),
      files_to_check=[r'.+_(?:unit)?test\.py$'],
    )
  )


def CheckRuff(input_api, output_api):
  return input_api.canned_checks.RunRuff(input_api, output_api)
