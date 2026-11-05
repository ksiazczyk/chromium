# Copyright 2025 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: script
# title: PRESUBMIT.py checks for chrome/common
# summary: Runs common Glic presubmit checks from chrome/browser/resources/glic on upload and commit of changes in this directory.
# ---


def _CommonChecks(input_api, output_api):
  old_path = input_api.sys.path[:]
  try:
    input_api.sys.path.insert(0, "../..")
    from chrome.browser.resources.glic.common_checks import GlicCommonChecks

    return GlicCommonChecks(input_api, output_api)
  finally:
    # Restore the original path, or other presubmits may fail.
    input_api.sys.path = old_path


def CheckChangeOnUpload(input_api, output_api):
  return _CommonChecks(input_api, output_api)


def CheckChangeOnCommit(input_api, output_api):
  return _CommonChecks(input_api, output_api)
