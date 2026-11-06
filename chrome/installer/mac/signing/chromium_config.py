# Copyright 2019 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: Code sign config for Chromium builds
# summary: Defines the code sign configuration for non-official Chromium builds, omitting provisioning profiles since it is mainly used for testing.
# ---

from signing.build_props_config import BuildPropsCodeSignConfig


class ChromiumCodeSignConfig(BuildPropsCodeSignConfig):
    """A CodeSignConfig used for signing non-official Chromium builds.

    This is primarily used for testing, so it does not include certain
    signing elements like provisioning profiles.
    """

    @property
    def provisioning_profile_basename(self):
        return None
