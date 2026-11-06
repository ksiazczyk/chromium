---
type: readme
title: Benchmark schedule directory README
summary: Explains that the directory holds one schedule file per benchmark, where each line gives a bot platform, repeats, and optional kwargs, with an example for speedometer2.csv.
relations:
  - documents /tools/perf/core/schedule/speedometer2.csv
  - references /tools/perf/cross_device_test_config.py
---

This dir contains a schedule file per available benchmark.
Each line contains a bot_platform name and the number of repeats
(use 1 by default). Additional columns map to non-default kwargs
on the configs (telemetry, executable, crossbench)

# Example:
Example contents for `speedometer2.csv`:
```
bot,repeats,shards
linux-perf-pgo,1,1
```

For more complex sharing / repeat configurations see
`tools/perf/cross_device_test_config.py`.