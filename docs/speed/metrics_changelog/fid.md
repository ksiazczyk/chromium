---
type: changelog
title: First Input Delay Changelog
summary: Index of First Input Delay changes, noting its September 2024 deprecation in favor of Interaction to Next Paint and linking to historical entries.
relations:
  - references /docs/speed/metrics_changelog/2019_07_fid.md
  - references /docs/speed/metrics_changelog/2020_05_fid.md
  - references /docs/speed/metrics_changelog/2021_05_fid.md
---

# First Input Delay Changelog

This is a list of changes to [First Input Delay](https://web.dev/fid).

* September 9, 2024
  * Deprecated in favor of [Interaction to Next Paint](https://web.dev/articles/inp)
* Chrome 91
  * Chrome change affecting metric: [Disable double-tap-to-zoom on mobile viewports](2021_05_fid.md)
* Chrome 83
  * Metric definition improvement: [First Input Delay includes inputs with delays &lt; 1ms in Chrome User Experience Report](2020_05_fid.md)
* Chrome 77
  * Metric exposed via API: [First Input Delay](https://web.dev/fid/) available via [Event Timing API](https://github.com/tdresser/event-timing#first-input-timing)
* Chrome 75
  * Metric definition improvement: [First Input Delay includes input events that had previously been filtered](2019_07_fid.md)
