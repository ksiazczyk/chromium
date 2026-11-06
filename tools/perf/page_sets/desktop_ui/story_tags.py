# Copyright 2021 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: Story tags for desktop UI page sets
# summary: Defines a Tag namedtuple and the smoke_test tag used to mark desktop UI stories that should run in the smoke test for CQ coverage.
# ---

import collections

Tag = collections.namedtuple('Tag', ['name', 'description'])

SMOKE_TEST = Tag(
  'smoke_test',
  'Run by the smoke test. Add this tag to get the feature covered on CQ',
)
