# Copyright 2025 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: test
# title: Enterprise webstore test package init
# summary: Package initializer for the enterprise webstore e2e tests that re-exports symbols from the managed browser enterprise CWS module.
# ---

from .enterprise_cws.managed_browser_enterprise_cws import *  # noqa: F403
