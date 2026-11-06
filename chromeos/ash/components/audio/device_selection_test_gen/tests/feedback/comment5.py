# Copyright 2025 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: test
# title: 'Feedback test: monitor 1 reactivated after replug'
# summary: Simulates selecting monitor 1 among two monitors and verifies monitor 1 is reactivated after both monitors are unplugged and replugged.
# ---

from dsp import Simulator, T


def run(s: Simulator):
    A, B, C = s.abc(T.Internal, T.HDMI, T.HDMI)
    s.plug(A)

    # The user plugs monitor 1.
    s.plug(B)

    # The user plugs monitor 2.
    s.plug(C)

    # The user selects monitor 1.
    s.select(B)

    # The user unplugs monitor 1.
    s.unplug(B)

    # The user unplugs monitor 2.
    s.unplug(C)

    # The user plugs monitor 1.
    s.plug(B)

    # The user plugs monitor 2. => The activated device should be monitor 1 instead of monitor 2.
    s.plug(C)
    s.expect(B)
