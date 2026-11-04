# Copyright 2020 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: Path helpers for accessibility tools
# summary: Python module providing helpers to resolve paths relative to the accessibility directory and Chrome source root.
# ---

'''Helpers for paths in accessibility.'''

import os

_SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
_CHROME_SOURCE_DIR = os.path.normpath(
  os.path.join(_SCRIPT_DIR, *[os.path.pardir] * 6)
)


def AccessibilityPath(path='.'):
  '''Converts a path relative to the top-level accessibility directory to a
  path relative to the current directory.
  '''
  return os.path.relpath(os.path.join(_SCRIPT_DIR, '..', path))


def ChromeRootPath(path='.'):
  '''Converts a path relative to the top-level accessibility directory to a
  path relative to the Chrome source directory.
  '''
  return os.path.relpath(os.path.join(_CHROME_SOURCE_DIR, path))
