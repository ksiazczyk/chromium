---
type: readme
title: Media Engagement Preload Tools
summary: Explains the tools that compile high-engagement origins into a DAFSA protobuf preloaded to allow autoplay on popular media sites.
relations:
  - documents /tools/media_engagement_preload/make_dafsa.py
  - references /chrome/browser/media/media_engagement_preload.proto
---

# Media Engagement Preload Tools

Tools for generating the preloaded Media Engagement Index (MEI) list.

`make_dafsa.py` compiles a list of high-engagement origins into a
Deterministic Acyclic Finite State Automaton (DAFSA) serialized as a
`PreloadedData` protobuf
(`//chrome/browser/media/media_engagement_preload.proto`). This data is loaded
by `MediaEngagementPreloadedList` to allow autoplay on sites with high global
media engagement.
