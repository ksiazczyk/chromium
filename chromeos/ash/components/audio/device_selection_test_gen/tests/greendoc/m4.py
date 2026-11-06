# Copyright 2025 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: test
# title: 'm4: HDMI switching across replugs keeps internal speaker'
# summary: Simulates switching between the internal speaker and two HDMI monitors across plug and unplug cycles, expecting output from the internal speaker.
# ---

from dsp import Simulator, T


def run(s: Simulator):
    A, B, C = s.abc(T.Internal, T.HDMI, T.HDMI)
    s.plug(A)

    # Connect to HDMI monitor 1
    s.plug(B)

    # Set Internal speaker as output
    s.select(A)

    # Disconnect HDMI
    s.unplug(B)

    # Connect to HDMI monitor 2
    s.plug(C)

    # Set HDMI as output
    s.select(C)

    # Disconnect HDMI
    s.unplug(C)

    # Connect HDMI monitor 1
    s.plug(B)

    # Output from internal speaker
    s.expect(A)
