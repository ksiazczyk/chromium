---
type: readme
title: NoStatePrefetch browser directory overview
summary: Explains that the directory contains the NoStatePrefetch implementation, triggered only via link rel=prerender through NoStatePrefetchManager.
---

This directory contains NoStatePrefetch implementation.

Currently NoStatePrefetch can only be triggered by `<link rel="prerender">`.
This feature call `StartPrefetchingFromLinkRelPrerender()` on
`NoStatePrefetchManager` to start prefetching.
