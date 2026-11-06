# Copyright 2013 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: Build type plugins for cr
# summary: Defines the BuildType plugin base class and the Debug and Release build types that map to the BUILDTYPE variable and output directory level.
# ---

"""A module for the basic build type support in cr."""

import cr


class BuildType(cr.Plugin, cr.Plugin.Type):
  """Base class for implementing cr build types.

  A build type corresponds to the second directory level in the standard output
  directory format, and the BUILDTYPE environment variable used by chromium
  tools.
  """

  SELECTOR = 'CR_BUILDTYPE'

  DEFAULT = cr.Config.From(
    BUILDTYPE='{CR_BUILDTYPE}',
  )

  def __init__(self):
    super(BuildType, self).__init__()
    self.active_config.Set(
      CR_TEST_MODE=self.name,
    )

  @classmethod
  def AddArguments(cls, parser):
    parser.add_argument(
      '--type',
      dest=cls.SELECTOR,
      choices=cls.Choices(),
      default='Debug',
      help='Sets the build type to use. Overrides ' + cls.SELECTOR,
    )


class DebugBuildType(BuildType):
  """A concrete implementation of BuildType for Debug builds."""

  def __init__(self):
    super(DebugBuildType, self).__init__()
    self._name = 'Debug'


class ReleaseBuildType(BuildType):
  """A concrete implementation of BuildType for Release builds."""

  def __init__(self):
    super(ReleaseBuildType, self).__init__()
    self._name = 'Release'

  @property
  def priority(self):
    return BuildType.GetPlugin('Debug').priority + 1
