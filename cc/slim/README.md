---
type: readme
title: Slim compositor overview
summary: Explains that cc/slim contains the slim compositor, a re-implementation of cc for the Android browser compositor that conditionally wraps cc types during the transition.
---

# cc/slim

This directory contains the "slim" compositor. The initial goal is a
re-implementation of cc with only the features and requirements needed by the
Android browser compositor, and transition the Android browser compositor from
cc to slim compositor.

During the transition, cc/slim will have a similar API surface as cc, and
cc/slim will conditionally wrap cc types so that slim compositor can be
controlled via an experiment.
