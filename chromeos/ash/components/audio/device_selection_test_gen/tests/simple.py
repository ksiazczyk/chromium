# Copyright 2025 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: test
# title: Simple USB device selection test scenario
# summary: Simulates plugging three USB audio devices with successive selection changes and an unplug to exercise basic device selection behavior.
# ---


from dsp import T, Simulator


def run(s: Simulator):
    A, B, C = s.abc(T.USB, T.USB, T.USB)

    s.plug(A)

    s.plug(B)
    s.select(B)

    s.plug(C)
    s.select(A)

    s.unplug(C)
