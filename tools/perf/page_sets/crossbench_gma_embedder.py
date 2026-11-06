# Copyright 2026 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: GMA embedder crossbench story set
# summary: Story set for the gma.embedder.crossbench benchmark with its Android archive data file.
# ---

import os

from core import path_util
from telemetry import story

_PAGE_SET_DIR = os.path.join(
  path_util.GetChromiumSrcDir(), 'tools', 'perf', 'page_sets'
)


class GmaEmbedderCrossbenchStorySet(story.StorySet):
  NAME = 'gma.embedder.crossbench'

  def __init__(self):
    super().__init__(
      base_dir=_PAGE_SET_DIR,
      archive_data_file='data/crossbench_android_gma_embedder.json',
      cloud_storage_bucket=story.PARTNER_BUCKET,
    )
