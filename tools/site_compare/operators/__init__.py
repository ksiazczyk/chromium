# Copyright 2011 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: Operator selection module for site_compare
# summary: Resolves a comparison operator by name and returns its Python module for use by the site comparison tool.
# ---

"""Selects the appropriate operator."""


def GetOperator(operator):
  """Given an operator by name, returns its module.

  Args:
    operator: string describing the comparison

  Returns:
    module
  """

  # TODO(jhaas): come up with a happy way of integrating multiple operators
  # with different, possibly divergent and possibly convergent, operators.

  module = __import__(operator, globals(), locals(), [''])

  return module
