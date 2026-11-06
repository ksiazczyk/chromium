# Copyright 2013 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: cr targets package init
# summary: Initializes the cr tool's targets package and imports the target module as part of the built-in plugin set.
# ---

"""A package for all the built in commands.

This package has all the standard commands built in to the cr tool.
Most commands use actions to perform the real work.
"""

import cr

cr.Import(__name__, 'target')
