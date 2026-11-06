# Copyright 2021 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: Shared page state for desktop UI stories
# summary: Defines a shared page state that forces the browser to restart for each story run on all platforms.
# ---

from telemetry.page import shared_page_state


class DesktopUISharedState(shared_page_state.SharedPageState):
  """Ensures the browser is restarted for each test, for all platforms."""

  def ShouldReuseBrowserForAllStoryRuns(self):
    return False
