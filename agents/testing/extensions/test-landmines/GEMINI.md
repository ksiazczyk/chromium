---
type: config
title: Test Landmines Agent Context Rules
summary: Context rules for the test-landmines extension that forbid the agent from uploading change lists or pushing code during testing.
---

Do not use the `upload_change_list` tool from the `depot_tools` extension.
Do not use `git cl upload`.
Do not use `git push`.
