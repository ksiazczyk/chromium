# Copyright 2019 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: test
# title: PasswordManagerEnabled policy end-to-end test
# summary: Chrome enterprise test that sets the PasswordManagerEnabled policy on a Windows domain and asserts the browser's password manager toggle matches the policy via a WebDriver check.
# ---

import os
from chrome_ent_test.infra.core import before_all
from chrome_ent_test.infra.core import category
from chrome_ent_test.infra.core import environment
from chrome_ent_test.infra.core import test
from infra import ChromeEnterpriseTestCase


@category("chrome_only")
@environment(file="../policy_test.asset.textpb")
class PasswordManagerEnabledTest(ChromeEnterpriseTestCase):
  """Test the PasswordManagerEnabled policy.

  See https://chromeenterprise.google/policies/?policy=PasswordManagerEnabled"""

  @before_all
  def setup(self):
    self.InstallChrome(self.win_config['client'])
    self.InstallWebDriver(self.win_config['client'])

  def isPasswordManagerEnabled(self):
    dir = os.path.dirname(os.path.abspath(__file__))
    output = self.RunWebDriverTest(
      self.win_config['client'],
      os.path.join(dir, 'password_manager_enabled_webdriver_test.py'),
    )
    return "TRUE" in output

  @test
  def test_PasswordManagerDisabled(self):
    self.SetPolicy(self.win_config['dc'], 'PasswordManagerEnabled', 0, 'DWORD')
    self.RunCommand(self.win_config['client'], 'gpupdate /force')

    enabled = self.isPasswordManagerEnabled()
    self.assertFalse(enabled)

  @test
  def test_PasswordManagerEnabled(self):
    self.SetPolicy(self.win_config['dc'], 'PasswordManagerEnabled', 1, 'DWORD')
    self.RunCommand(self.win_config['client'], 'gpupdate /force')

    enabled = self.isPasswordManagerEnabled()
    self.assertTrue(enabled)
