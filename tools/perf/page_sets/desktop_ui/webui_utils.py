# Copyright 2021 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: WebUI inspection helper
# summary: Provides the Inspect helper, which waits for a WebUI tab to load and returns a new action runner for interacting with it.
# ---

import py_utils
from telemetry.internal.actions.action_runner import ActionRunner


def Inspect(browser, url):
  # Wait for url to be inspectable.
  browser.supports_inspecting_webui = True
  tabs = browser.tabs
  py_utils.WaitFor(lambda: any(True for tab in tabs if tab.url == url), 10)
  # Wait for url to load.
  tab = next(iter([tab for tab in tabs if tab.url == url]))
  action_runner = ActionRunner(tab)  # Recreate action_runner.
  tab.WaitForDocumentReadyStateToBeComplete()
  return action_runner
