# Copyright 2025 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: test
# title: 'Scenario 2: replug of selected USB device'
# summary: Simulates selecting USB device A, then unplugging and replugging it, expecting A to become active again.
# ---

from dsp import Simulator, T


def run(s: Simulator):
    I, A, B = s.abc(T.Internal, T.USB, T.USB, charset='IAB')  # noqa: E741
    s.plug(I)

    s.plug(A)
    s.plug(B)
    s.select(A)
    s.unplug(A)
    s.plug(A)
    s.expect(A)
