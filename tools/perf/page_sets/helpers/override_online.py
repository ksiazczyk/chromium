# Copyright 2020 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: source
# title: Override navigator.onLine helper
# summary: Defines a JavaScript snippet that overrides navigator.onLine to always return true, for use in performance page sets.
# ---

"""A script that will override navigator.onLine to always return true."""

ALWAYS_ONLINE = '''
  Object.defineProperty(window.navigator, 'onLine', {
    get: function() {
      return true;
    },
  });'''
