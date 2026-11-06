# Copyright 2013 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: cr tool root module
# summary: Root module of the Chromium cr tool that imports core submodules and promotes commonly accessed elements and plugins into the cr namespace.
# ---

"""Chromium cr tool module.

This is the root module of all the cr code.
Commonly accessed elements, including all plugins, are promoted into this
module.
"""

import cr.loader
from cr.loader import Import

Import(__name__, 'auto.user')
Import(__name__, 'autocomplete')
Import(__name__, 'config')
Import(__name__, 'plugin')
Import(__name__, 'base')
Import(__name__, 'commands')
Import(__name__, 'actions')
