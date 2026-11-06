# Copyright 2022 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: GPU result processor for flake suppression
# summary: Parses ResultDB result names to extract the GPU test suite and test name for flake suppression.
# ---

from typing import Tuple

from flake_suppressor_common import results as results_module


class GpuResultProcessor(results_module.ResultProcessor):
  def GetTestSuiteAndNameFromResultDbName(
    self, result_db_name: str
  ) -> Tuple[str, str]:
    _, suite, __, test_name = result_db_name.split('.', 3)
    return suite, test_name
