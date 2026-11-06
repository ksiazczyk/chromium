# Copyright 2013 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: ci
# title: Presubmit checks for the IDL parser
# summary: Runs the *_test.py unit tests in this directory via canned presubmit checks on upload and commit.
# ---


CHECK_FILES = [r'^.+_test\.py$']


def _RunTests(input_api, output_api):
  return input_api.canned_checks.RunUnitTestsInDirectory(
    input_api, output_api, '.', files_to_check=CHECK_FILES
  )


def CheckChangeOnUpload(input_api, output_api):
  return _RunTests(input_api, output_api)


def CheckChangeOnCommit(input_api, output_api):
  return _RunTests(input_api, output_api)
