---
type: readme
title: App group targets overview
summary: Explains the three app group targets and that an application should depend on either the client or main app target, not both.
---

App group defines 3 targets:
- app_group_common,
- app_group_client,
- app_group_mainapp.

A typical application is either a main app or a client of a main app, so it
should depend on either app_group_client or app_group_client, but not on
both.

