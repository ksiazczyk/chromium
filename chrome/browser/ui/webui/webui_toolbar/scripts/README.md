---
type: readme
title: WebUI toolbar scripts usage and maintenance
summary: Explains how to run Chrome with the stored WebUI top-chrome flags for benchmarking and how to maintain the flag set.
relations:
  - documents /chrome/browser/ui/webui/webui_toolbar/scripts/run.sh
---

# Usage

Scripts to store our best set of flags.

Use this if you want to benchmark Webium top-chrome
with/without some new feature you are adding.

`run.sh` takes a binary and runs it with the correct flags.

E.g.

```
run.sh out/linux-opt/chrome --other-chrome-arguments
```

# Maintenance

As new features/optimizations are added for webium,
ideally they are on by default if webium is enabled
(by adding them as parameters on one of the webium flags)
but if not,
they should be added here.
