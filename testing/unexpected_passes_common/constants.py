# Copyright 2021 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: Constants for unexpected pass finders
# summary: Defines Chromium source directory paths and the CI/try builder type constants.
# ---

"""Constants for unexpected pass finders."""

import os

CHROMIUM_SRC_DIR = os.path.realpath(
  os.path.join(os.path.dirname(__file__), '..', '..')
)
SRC_INTERNAL_DIR = os.path.realpath(os.path.join(CHROMIUM_SRC_DIR, 'internal'))


class BuilderTypes(object):
  CI = 'ci'
  TRY = 'try'
