# Copyright 2019 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: test
# title: Enterprise test package initializer
# summary: Package initializer that re-exports ChromeEnterpriseTestCase for the enterprise E2E test infrastructure.
# ---

from .chrome_ent_test_case import ChromeEnterpriseTestCase  # noqa: F401
