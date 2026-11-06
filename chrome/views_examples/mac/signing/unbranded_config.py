# Copyright 2026 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: Unbranded code sign config for Views Examples
# summary: Defines UnbrandedCodeSignConfig, a BuildPropsCodeSignConfig subclass used for signing non-official Views Examples builds without a provisioning profile.
# ---

from signing.build_props_config import BuildPropsCodeSignConfig


class UnbrandedCodeSignConfig(BuildPropsCodeSignConfig):
    """A CodeSignConfig used for signing non-official Views Examples builds."""

    @property
    def provisioning_profile_basename(self):
        return None
