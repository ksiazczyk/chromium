# Copyright 2025 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: test
# title: 'Feedback test: Bluetooth headset unplug keeps monitor 2 active'
# summary: Simulates plugging monitors and a Bluetooth headset, then verifies monitor 2 remains the activated device after the headset disconnects.
# ---

from dsp import Simulator, T


def run(s: Simulator):
    A, B, C, D = s.abc(T.Internal, T.HDMI, T.HDMI, T.USB)
    s.plug(A)

    # The user plugs monitor 1.
    s.plug(B)

    # The user plugs monitor 2.
    s.plug(C)

    # The user selects monitor 2 as the activated device.
    s.select(C)

    # The user connects a Bluetooth headset.
    s.plug(D)

    # The user’s Bluetooth headset disconnected. => The activated device should be monitor 2.
    s.unplug(D)
    s.expect(C)
