---
type: readme
title: Shared UI folder
summary: Explains that this folder holds code shared by all UI features and when code should be added here.
---

# Shared UI folder

This folder only contains the code shared by all the UI features. It
is here mostly to ease the DEPS rules: the UI code can depend on all code here.

Add code here only if it is likely to be shared by a significant number of UI
features (for example utils, UI elements meant to be used by other
components...).
