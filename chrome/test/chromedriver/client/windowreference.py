# Copyright 2024 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: test
# title: WindowReference class representing a window
# summary: Small reference class that stores a chromedriver client and a window id to represent a window in test sessions.
# ---


class WindowReference:
  """Represents a window."""

  def __init__(self, chromedriver, id_):
    self._chromedriver = chromedriver
    self._id = id_
