# Copyright 2015 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: Dummy telemetry story set
# summary: Defines a dummy telemetry story set with a single local page that verifies a JavaScript value, used for testing story set behavior.
# ---

from telemetry.page import page as page_module
from telemetry import story


class DummyPage(page_module.Page):
  def __init__(self, page_set):
    super(DummyPage, self).__init__(
      url='file://dummy_pages/dummy_page.html',
      name='dummy_page.html',
      page_set=page_set,
    )

  def RunPageInteractions(self, action_runner):
    assert action_runner.EvaluateJavaScript('1 + window.__dummy_value') == 2


class DummyStorySet(story.StorySet):
  def __init__(self):
    super(DummyStorySet, self).__init__()
    self.AddStory(DummyPage(self))
