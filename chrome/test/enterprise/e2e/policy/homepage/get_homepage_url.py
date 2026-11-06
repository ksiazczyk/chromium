# Copyright 2019 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: test
# title: Get homepage URL via Alt+Home shortcut
# summary: pywinauto UI test helper that presses Alt+Home in Chrome and prints the resulting page URL so the homepage policy test can verify it.
# ---

from pywinauto.application import Application

from test_util import create_chrome_webdriver

driver = create_chrome_webdriver()

try:
  app = Application(backend="uia")
  app.connect(title_re='.*Chrome|.*Chromium')

  # Use shortcut Alt+HOME to go to the home page
  app.top_window().type_keys("%{HOME}")

  print('homepage:%s' % driver.current_url)
finally:
  driver.quit()
