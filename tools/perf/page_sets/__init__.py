# Copyright 2014 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: Package init that discovers page set story classes
# summary: Imports and re-exports all StorySet subclasses discovered in the page_sets package for telemetry.
# ---

import inspect
import os
import sys

from telemetry import story

from py_utils import discover

# Import all submodules' PageSet classes.
start_dir = os.path.dirname(os.path.abspath(__file__))
top_level_dir = os.path.dirname(start_dir)
base_classes = [story.StorySet]

for base_class in base_classes:
  for cls in discover.DiscoverClasses(
    start_dir, top_level_dir, base_class
  ).values():
    setattr(sys.modules[__name__], cls.__name__, cls)
