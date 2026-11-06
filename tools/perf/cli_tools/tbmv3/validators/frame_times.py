# Copyright 2021 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: Script validator for the frame_times metric
# summary: Script validator that compares the frame_times histogram of the TBMv2 renderingMetric with the TBMv3 frame_times metric.
# ---

"""
Validates the rendering/frame_times metric.
"""

from cli_tools.tbmv3.validators import utils


def CompareHistograms(test_ctx):
  v2_histograms = test_ctx.RunTBMv2('renderingMetric')
  v3_histograms = test_ctx.RunTBMv3('frame_times')
  v2_hist = v2_histograms.GetHistogramNamed('frame_times')
  v3_hist = v3_histograms.GetHistogramNamed('frame_times::frame_time')

  utils.AssertHistogramStatsAlmostEqual(test_ctx, v2_hist, v3_hist)
