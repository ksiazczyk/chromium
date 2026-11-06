---
type: readme
title: ChromeOS Ash Extensions
summary: Introduces the directory holding Ash-specific Chrome extension implementations and API definitions, explaining the process-boundary-based subdirectory layout.
---

# ChromeOS Ash Extensions

This directory contains ChromeOS Ash-specific Chrome Extensions implementations
and API definitions.

## Directory Structure

Following standard Chromium repository naming conventions, the subdirectories
are organized by process boundary:

- `common/`: Code and API schemas shared between both the browser process
        and renderer processes.
- `browser/`: Code intended to be accessed exclusively from the browser process.
        Note that `browser` here refers to the Chromium browser process (as opposed to
        renderer processes), not a web browser application implementation.
- `renderer/` (planned): Code intended to be accessed exclusively from renderer processes.
