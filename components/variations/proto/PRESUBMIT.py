# Copyright 2020 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: ci
# title: Presubmit check for client_variations.proto changes
# summary: Presubmit script that warns when client_variations.proto is changed without a matching update to the DevTools JavaScript parser devtools/client_variations.js.
# ---

"""
See https://dev.chromium.org/developers/how-tos/depottools/presubmit-scripts
for more details on the presubmit API built into depot_tools.
"""


def CheckChange(input_api, output_api):
    """Checks that changes to client_variations.proto are mirrored."""
    has_proto_update = False
    has_devtools_update = False
    cwd = input_api.PresubmitLocalPath()
    for path in input_api.AbsoluteLocalPaths():
        if not path.startswith(cwd):
            continue
        name = input_api.os_path.relpath(path, cwd)
        if name == 'client_variations.proto':
            has_proto_update = True
        elif name == 'devtools/client_variations.js':
            has_devtools_update = True

    results = []
    if has_proto_update and not has_devtools_update:
        results.append(
            output_api.PresubmitPromptWarning(
                'client_variations.proto was changed. Does the JS parser at '
                'devtools/client_variations.js need to be updated as well?'
            )
        )
    return results


def CheckChangeOnUpload(input_api, output_api):
    return CheckChange(input_api, output_api)


def CheckChangeOnCommit(input_api, output_api):
    return []
