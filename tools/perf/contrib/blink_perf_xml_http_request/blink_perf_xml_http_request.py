# Copyright 2013 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: BlinkPerfXMLHttpRequest benchmark
# summary: Defines a Blink performance benchmark subclass that runs the XMLHttpRequest perf tests from the xml_http_request subdirectory.
# ---

from benchmarks import blink_perf


class BlinkPerfXMLHttpRequest(blink_perf._BlinkPerfBenchmark):
  SUBDIR = 'xml_http_request'
