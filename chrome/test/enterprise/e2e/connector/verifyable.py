# Copyright 2022 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: test
# title: Verifyable verification interface
# summary: Abstract interface whose TryVerify method is called repeatedly by connector tests until expected content is found or a timeout is reached.
# ---

from abc import ABC, abstractmethod
from . import VerifyContent


class Verifyable(ABC):
  """An interface to be used by connectors tests"""

  @abstractmethod
  def TryVerify(self, content: VerifyContent) -> bool:
    """This method will be called repeatedly until
    success or timeout. Returns boolean

    Args:
    deviceId: A GUID device id that made the action.
    timestamp: A datetime of the start time for the events
    eventId: the id\name of the event to verify
    """
