---
type: readme
title: Visibility Timer
summary: Explains that VisibilityTimerTabHelper runs a task after a WebContents has been continuously visible for a set time, resetting the timer whenever the tab becomes hidden.
---

# Visibility Timer

`VisibilityTimerTabHelper` is a `WebContentsObserver` that executes a task after
the `WebContents` has been continuously visible for a set amount of time. If the
tab becomes hidden before the timer fires, the timer is reset. This is useful
for deferring non-critical actions until a user explicitly keeps a tab visible
for a given duration.
