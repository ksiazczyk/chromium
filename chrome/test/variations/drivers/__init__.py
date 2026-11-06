# Copyright 2023 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: test
# title: Variations drivers package init
# summary: Package initializer that re-exports the DriverFactory class for the variations test drivers package.
# ---

from chrome.test.variations.drivers.driver_factory import DriverFactory  # noqa: F401
