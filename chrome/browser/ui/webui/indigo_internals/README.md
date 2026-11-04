---
type: readme
title: Indigo Internals WebUI README
summary: Explains that the directory provides a diagnostic page for debugging the Indigo feature and describes how developers can enable and access it behind internal-only UI preferences.
---

# Indigo Internals WebUI

This directory contains the code for `chrome://indigo-internals`, a diagnostic
page for the Indigo feature.

## Purpose

This page is intended for Chromium developers to debug and verify the status
of the Indigo feature, including local and remote eligibility.

## Access

As a debug UI, this page is placed behind the `kInternalOnlyUisEnabled`
preference. To access it, you must first ensure that the `kIndigo` feature
is enabled (`--enable-features=Indigo`). Then:
1. Navigate to `chrome://chrome-urls`.
2. Click on the link for `chrome://indigo-internals` (it may be grouped under
   internal-only UIs).
