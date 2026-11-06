# Copyright 2026 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: script
# title: Presubmit checks for fuchsia_web
# summary: Runs canned presubmit checks that verify patch formatting and Ruff linting for changes in the fuchsia_web directory.
# ---

"""Presubmit script for fuchsia_web."""

PRESUBMIT_VERSION = '2.0.0'


def CheckPatchFormatted(input_api, output_api):
    return input_api.canned_checks.CheckPatchFormatted(
        input_api,
        output_api,
        result_factory=output_api.PresubmitError,
        bypass_warnings=False,
    )


def CheckRuff(input_api, output_api):
    return input_api.RunTests(
        input_api.canned_checks.GetRuff(input_api, output_api)
    )
