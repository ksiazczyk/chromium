# Copyright 2017 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: ci
# title: Presubmit checks for media engagement preload tools
# summary: Presubmit script that runs the make_dafsa unit tests whenever related files are modified on upload or commit.
# ---


"""Chromium presubmit script for src/tools/media_engagement_preload."""


def _RunMakeDafsaTests(input_api, output_api):
  """Runs unittest for make_dafsa if any related file has been modified."""
  if not input_api.HasAffectedFiles(
    path=['make_dafsa.py', 'make_dafsa_unittest.py']
  ):
    return []

  return input_api.RunTests(
    input_api.canned_checks.RunUnitTestsInDirectory(
      input_api,
      output_api,
      input_api.PresubmitLocalPath(),
      files_to_check=['.*test\.py$'],
    )
  )


def CheckChangeOnUpload(input_api, output_api):
  return _RunMakeDafsaTests(input_api, output_api)


def CheckChangeOnCommit(input_api, output_api):
  return _RunMakeDafsaTests(input_api, output_api)
