---
type: guide
title: Code coverage debugging agent rules
summary: Agent rules for code coverage debugging that forbid scraping LUCI and Swarming HTML pages and require structured CLI tools for CAS and Swarming artifacts.
---

# Code Coverage Debugging Agent Rules

## Infrastructure & Swarming Constraints
* **Prohibit Web Page Scraping:** Do NOT scrape HTML pages from LUCI/Swarming
  (`ci.chromium.org`, `chromium-swarm.appspot.com`). Embedded log chunks will
  overwhelm context limits.
* **CAS & Swarming Artifacts:** Always use structured CLI tools (`swarming.py
  collect`, `cas download`, or dedicated helper scripts) rather than fetching
  raw browser HTML.
