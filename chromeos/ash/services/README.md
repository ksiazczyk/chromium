---
type: readme
title: Chrome OS ash services directory overview
summary: Explains that this directory holds ash-chrome Chrome OS specific services running in their own utility processes that Chrome can depend on to launch.
---

This directory holds [services](/services) that are:
- ash-chrome running on Chrome OS specific.
- They run in their own utility processes, and cannot call ash code directly.
- Chrome can add a DEP on these services just for the sole purpose of launching them (until ash supports launching its own services).
