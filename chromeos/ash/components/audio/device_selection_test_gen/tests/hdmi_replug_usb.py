# Copyright 2025 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# ---docerion
# type: test
# title: HDMI replug USB test scenario
# summary: Simulates plugging HDMI and USB audio devices, selecting HDMI, then unplugging and replugging the USB device to exercise device selection behavior.
# ---


from dsp import T, Simulator


def run(s: Simulator):
    A, B = s.abc(T.USB, T.HDMI)

    s.plug(A)
    s.plug(B)
    s.select(B)
    s.unplug(A)
    s.plug(A)
