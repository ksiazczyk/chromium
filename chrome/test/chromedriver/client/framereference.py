# Copyright 2024 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: test
# title: FrameReference class representing a frame
# summary: Small reference class that stores a chromedriver client and a frame id to represent a frame in test sessions.
# ---


class FrameReference:
  """Represents a frame."""

  def __init__(self, chromedriver, id_):
    self._chromedriver = chromedriver
    self._id = id_
