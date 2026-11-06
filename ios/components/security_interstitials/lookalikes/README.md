---
type: readme
title: Lookalikes iOS component README
summary: Explains that the directory holds shared iOS lookalike code and where end-to-end tests and tab helper unit tests live.
relations:
  - references /ios/chrome/browser/web/model/lookalike_url_egtest.mm
---

This directory contains shared iOS lookalike code.

End-to-end tests are located in ios/chrome/browser/web/model. The
ShouldAllowResponse tab helper code needs to be unit tested here in components,
since lookalike_url_egtest.mm uses a custom policy decider that overrides that
method.
