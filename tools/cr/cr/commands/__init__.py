# Copyright 2013 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: Built-in commands package initializer for the cr tool
# summary: Initializes the package of built-in cr tool commands by importing the command, prepare and init modules.
# ---

"""A package for all the built in commands.

This package has all the standard commands built in to the cr tool.
Most commands use actions to perform the real work.
"""

import cr

cr.Import(__name__, 'command')
cr.Import(__name__, 'prepare')
cr.Import(__name__, 'init')
