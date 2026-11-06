# Copyright 2019 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: test
# title: Apps shortcut visibility UI check
# summary: UI automation script that connects to a running Chrome window and reports whether the Apps shortcut is visible.
# ---

from absl import app
from pywinauto.application import Application

from test_util import create_chrome_webdriver


def main(argv):
  driver = create_chrome_webdriver()
  try:
    application = Application(backend="uia")
    application.connect(title_re='.*Chrome|.*Chromium')

    print("Looking for apps shortcut...")
    for desc in application.top_window().descendants():
      print(desc.window_text())
      if "Apps" == desc.window_text():
        print("TRUE")
        return

    print("FALSE")
  finally:
    driver.quit()


if __name__ == '__main__':
  app.run(main)
