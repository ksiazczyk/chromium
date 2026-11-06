# Copyright 2014 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: cpp_namespace_environment
# summary: Defines a helper class that stores the C++ namespace pattern used when generating code for a schema namespace.
# ---


class CppNamespaceEnvironment(object):
  def __init__(self, namespace_pattern):
    self.namespace_pattern = namespace_pattern
