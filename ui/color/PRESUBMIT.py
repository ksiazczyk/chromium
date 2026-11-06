# Copyright 2022 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: ci
# title: Presubmit lint checks for C++ changes
# summary: Presubmit script that runs cpplint checks on C++ source changes affecting the directory at upload and commit time.
# ---

"""Presubmit script for changes affecting //ui/views.

See http://dev.chromium.org/developers/how-tos/depottools/presubmit-scripts
for more details about the presubmit API built into depot_tools.
"""

INCLUDE_CPP_FILES_ONLY = (r'.*\.(cc|h)$',)


def CheckChangeLintsClean(input_api, output_api):
  """Makes sure that the change is cpplint clean."""
  sources = lambda x: input_api.FilterSourceFile(  # noqa: E731
    x,
    files_to_check=INCLUDE_CPP_FILES_ONLY,
    files_to_skip=input_api.DEFAULT_FILES_TO_SKIP,
  )
  return input_api.canned_checks.CheckChangeLintsClean(
    input_api, output_api, sources, lint_filters=[], verbose_level=1
  )


def CheckChange(input_api, output_api):
  results = []
  results += CheckChangeLintsClean(input_api, output_api)
  return results


def CheckChangeOnUpload(input_api, output_api):
  return CheckChange(input_api, output_api)


def CheckChangeOnCommit(input_api, output_api):
  return CheckChange(input_api, output_api)
