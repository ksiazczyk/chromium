# Copyright 2019 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: Formatters package with results output formatter registry
# summary: Package initializer that registers the available results formatters for JSON test results, histograms, HTML and CSV output.
# ---

from core.results_processor.formatters import csv_output
from core.results_processor.formatters import histograms_output
from core.results_processor.formatters import html_output
from core.results_processor.formatters import json3_output


FORMATTERS = {
  'json-test-results': json3_output,
  'histograms': histograms_output,
  'html': html_output,
  'csv': csv_output,
}
