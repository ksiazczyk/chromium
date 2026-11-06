---
type: readme
title: Native Theme Rendering for UI
summary: Explains that the directory draws UI elements natively or by emulation and introduces NativeTheme as the cross-platform API for dark mode state and drawing UI.
relations:
  - references /ui/native_theme/native_theme.h
---

# Native Theme Rendering for UI

This directory contains source needed to draw UI elements in a native fashion,
either by actually calling native APIs or by emulating/reimplementing native
behavior. The primary class is [NativeTheme](native_theme.h), which provides a
cross-platform API for things like "is the system in dark mode" and "how do I
draw/color various bits of UI".
