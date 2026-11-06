# Copyright 2025 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: test
# title: 'Scenario 4: replug both USB devices in reverse order'
# summary: Simulates selecting USB device A, unplugging both USB devices, and replugging B then A, expecting A to stay active.
# ---

from dsp import Simulator, T


def run(s: Simulator):
    I, A, B = s.abc(T.Internal, T.USB, T.USB, charset='IAB')  # noqa: E741
    s.plug(I)

    s.plug(A)
    s.plug(B)
    s.select(A)
    s.unplug(A)
    s.unplug(B)
    s.plug(B)
    s.plug(A)
    s.expect(A)
