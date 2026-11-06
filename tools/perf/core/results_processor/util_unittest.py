# Copyright 2019 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: test
# title: Unit tests for the util module
# summary: Unit tests verifying that ApplyInParallel applies a function to all work items and correctly invokes the on_failure callback when an exception occurs.
# ---

import unittest

from core.results_processor import util


class UtilTests(unittest.TestCase):
  def testApplyInParallel(self):
    work_list = [[1], [2], [3]]

    def fun(x):
      x.extend(x)

    util.ApplyInParallel(fun, work_list)
    self.assertEqual(work_list, [[1, 1], [2, 2], [3, 3]])

  def testApplyInParallelOnFailure(self):
    work_list = [[1], [2], [3]]

    def fun(x):
      if x == [3]:
        raise RuntimeError()

    util.ApplyInParallel(fun, work_list, on_failure=lambda x: x.pop())
    self.assertEqual(work_list, [[1], [2], []])
