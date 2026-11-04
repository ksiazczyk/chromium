---
type: data
title: Agent prompt for fixing the GN dependency issue
summary: Prompt instructing the agent to fix the GN dependency issue in gn_deps_debugging_eval.h with a narrow Chromium-style fix, forbidding broad deps, public_deps, and nogncheck.
relations:
  - references /components/prefs/pref_service.h
---

Fix the GN dependency issue in `base/strings/gn_deps_debugging_eval.h`.

`gn check` reports that `components/prefs/pref_service.h` cannot be included
from this public header. This header only stores and passes a `PrefService*`.

Apply the narrow Chromium-style fix. Do not add broad dependencies, do not add
`public_deps`, and do not add `// nogncheck`.
