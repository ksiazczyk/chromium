# Copyright 2025 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: Loading crossbench story set
# summary: Story set for the loading.crossbench benchmark using Android loading archive data.
# ---

import os

from core import path_util
from telemetry import story

_PAGE_SET_DIR = os.path.join(
  path_util.GetChromiumSrcDir(), 'tools', 'perf', 'page_sets'
)


class LoadingCrossbenchStorySet(story.StorySet):
  NAME = 'loading.crossbench'

  def __init__(self):
    super().__init__(
      base_dir=_PAGE_SET_DIR,
      archive_data_file='data/crossbench_android_loading.json',
      cloud_storage_bucket=story.PARTNER_BUCKET,
    )
