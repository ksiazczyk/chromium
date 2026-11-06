# Copyright 2022 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: test
# title: Jinja helper providing custom globals and filters for tests
# summary: Defines a custom Jinja global (name_with_title) and filter (custom_upper) used by the JSON data generator tests.
# ---


def _custom_upper(name: str):
    return name.upper()


def get_custom_globals(model):
    return {
        'name_with_title': 'Mr ' + model['test_data1']['name'],
    }


def get_custom_filters(model):
    return {
        'custom_upper': _custom_upper,
    }
