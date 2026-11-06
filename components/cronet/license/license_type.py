# Copyright 2025 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: LicenseType enum ranking license restrictions
# summary: Defines an enum that ranks license types from unknown to by-exception-only, where higher values indicate more restrictive licenses.
# ---

import enum


class LicenseType(enum.Enum):
    # The higher the value, the higher the restrictions.
    UNKNOWN = 0
    UNENCUMBERED = 1
    PERMISSIVE = 2
    NOTICE = 3
    RECIPROCAL = 4
    RESTRICTED = 5
    BY_EXCEPTION_ONLY = 6
