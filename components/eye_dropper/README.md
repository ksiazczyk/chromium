---
type: readme
title: Eye Dropper Component
summary: Describes the views-based EyeDropper widget for Aura desktop platforms, which platforms use it, and why Wayland is unsupported.
---

# Eye Dropper Component

Views implementation of JS [EyeDropper](https://wicg.github.io/eyedropper-api/)
for desktop OSes using Aura.  The EyeDropper widget allows users to select any
pixel on the screen.

Win, Linux X11, and ChromeoS Ash use this widget.

Mac uses a system NSColorSampler.

Linux Wayland is not supported since Wayland does not have support to detect the
cursor position or to place the EyeDropper widget outside the browser window.
