# Copyright 2025 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: test
# title: 'm3: Headphone unplug returns to selected HDMI monitor'
# summary: Simulates selecting HDMI monitor1, then plugging and unplugging a headphone, expecting output from HDMI monitor1.
# ---

from dsp import Simulator, T


def run(s: Simulator):
    A, B, C, D = s.abc(T.Internal, T.HDMI, T.HDMI, T.Headphone)
    s.plug(A)

    # Connect a HDMI monitor1
    s.plug(B)

    # Connect a HDMI monitor2
    s.plug(C)

    # Select the HDMI monitor1
    s.select(B)

    # Connect 3.5 mm Headphone
    s.plug(D)

    # Disconnect Headphone
    s.unplug(D)

    # Expected: Output from HDMI monitor1
    s.expect(B)
