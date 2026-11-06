---
type: readme
title: Memory system component overview
summary: Explains that the component provides a common interface to initialize memory components like GWP-ASan early at startup and holds them for the embedder's lifetime.
---

The memory-system component provides a common interface to initialize memory
components like GWP-ASan, which must be enabled early in the startup of each
embedder that supports them.

Furthermore it acts as a holder for various memory components that must exist
throughout the embedders lifetime.
