# Copyright 2020 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: script
# title: Media App UI presubmit checks
# summary: Python presubmit script that runs web_dev_style checks on changes uploaded to or committed in the media_app_ui directory.
# ---


def CheckChangeOnUpload(input_api, output_api):
  return _CommonChecks(input_api, output_api)


def CheckChangeOnCommit(input_api, output_api):
  return _CommonChecks(input_api, output_api)


def _CommonChecks(input_api, output_api):
  results = []
  try:
    import sys

    old_sys_path = sys.path[:]
    cwd = input_api.PresubmitLocalPath()
    sys.path += [input_api.os_path.join(cwd, '..', '..', '..', 'tools')]
    from web_dev_style import presubmit_support

    results += presubmit_support.CheckStyle(input_api, output_api)
  finally:
    sys.path = old_sys_path
  return results
