# Copyright 2019 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: Results Processor package init
# summary: Re-exports the main entry points of the results_processor package from its submodules.
# ---

from core.results_processor.command_line import ArgumentParser
from core.results_processor.command_line import ProcessOptions
from core.results_processor.processor import ProcessResults
from core.results_processor.processor import main
