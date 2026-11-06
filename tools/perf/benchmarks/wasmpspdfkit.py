# Copyright 2021 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: WebAssembly PSPDFKit benchmark
# summary: Defines the wasmpspdfkit benchmark measuring WebAssembly rendering of and interaction on a PDF file using the wasm trace metric.
# ---

"""The WebAssembly benchmark of PSPDFKit

The PSPDFKit benchmark measures rendering of and interactions on a pdf file.
"""

from telemetry import benchmark
from telemetry.web_perf import timeline_based_measurement

import page_sets
from benchmarks import press


@benchmark.Info(
  emails=['ahaas@chromium.org', 'vahl@chromium.org'],
  component='Blink>JavaScript>WebAssembly',
)
class WasmPsPdfKit(press._PressBenchmark):
  @classmethod
  def Name(cls):
    return 'wasmpspdfkit'

  def CreateStorySet(self, options):
    return page_sets.WasmPsPdfKitStorySet()

  def CreateCoreTimelineBasedMeasurementOptions(self):
    options = timeline_based_measurement.Options()
    options.ExtendTraceCategoryFilter(['v8.wasm'])
    options.ExtendTimelineBasedMetric(['wasmMetric'])
    return options
