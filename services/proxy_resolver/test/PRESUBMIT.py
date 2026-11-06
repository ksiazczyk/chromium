# Copyright 2023 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: ci
# title: Presubmit checks for proxy resolver test bundle data
# summary: Presubmit hook that runs the iOS bundle data check to keep the test_bundle_data filelist in sync with its globlist.
# ---

"""Presubmit checks for services/proxy_resolver/test
See https://www.chromium.org/developers/how-tos/depottools/presubmit-scripts
for more details about the presubmit API built into depot_tools.
"""
PRESUBMIT_VERSION = '2.0.0'
USE_PYTHON3 = True
def CheckChange(input_api, output_api):
    import sys
    old_sys_path = sys.path[:]
    results = []
    try:
        sys.path.append(input_api.change.RepositoryRoot())
        from build.ios import presubmit_support
        results += presubmit_support.CheckBundleData(input_api,
                                                     output_api,
                                                     'test_bundle_data',
                                                     globroot='.')
    finally:
        sys.path = old_sys_path
    return results

