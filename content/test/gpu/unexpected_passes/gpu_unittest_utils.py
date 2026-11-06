# Copyright 2021 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: test
# title: Helpers for GPU unexpected passes unit tests
# summary: Provides a generic GPU querier factory and a generic expectations stub used by the GPU unexpected passes unit tests.
# ---

"""Helper methods for GPU unittests."""

import typing

from unexpected_passes_common import unittest_utils as uu

from unexpected_passes import gpu_expectations
from unexpected_passes import gpu_queries


def CreateGenericGpuQuerier(*args, **kwargs) -> gpu_queries.GpuBigQueryQuerier:
  return typing.cast(
    gpu_queries.GpuBigQueryQuerier,
    uu.CreateGenericQuerier(
      cls=gpu_queries.GpuBigQueryQuerier, *args, **kwargs
    ),
  )


class GenericGpuExpectations(gpu_expectations.GpuExpectations):
  def GetExpectationFilepaths(self) -> list:
    return []

  def _GetExpectationFileTagHeader(self, _) -> str:
    return """\
# tags: [ linux mac win ]
# tags: [ amd intel nvidia ]
# results: [ Failure RetryOnFailure Skip Pass ]
"""
