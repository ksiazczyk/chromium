# Copyright 2013 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: ci
# title: Linux tools presubmit script
# summary: Presubmit script for the linux tools directory that runs Python unit tests on affected files before upload and commit.
# ---

"""Top-level presubmit script for linux.

See http://dev.chromium.org/developers/how-tos/depottools/presubmit-scripts
for more details on the presubmit API built into depot_tools.
"""


def CommonChecks(input_api, output_api):
  if not input_api.HasAffectedFiles(extensions='.py'):
    return []

  output = []
  output.extend(
    input_api.canned_checks.RunUnitTestsInDirectory(
      input_api,
      output_api,
      input_api.os_path.join(input_api.PresubmitLocalPath(), 'tests'),
      files_to_check=[r'.+_tests\.py$'],
    )
  )
  return output


def CheckChangeOnUpload(input_api, output_api):
  return CommonChecks(input_api, output_api)


def CheckChangeOnCommit(input_api, output_api):
  return CommonChecks(input_api, output_api)
