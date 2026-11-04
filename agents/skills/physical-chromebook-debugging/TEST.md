---
type: test
title: Physical Chromebook Debugging Skill Agent E2E Test Plan
summary: End-to-end test plan with prompts and verification steps for checking the skill's guidance on reading Chrome logs via SSH.
relations:
  - tests /agents/skills/physical-chromebook-debugging/SKILL.md
  - references /agents/skills/physical-chromebook-debugging/SKILL.md
---

# Physical Chromebook Debugging Skill - Agent E2E Test Plan

## Prerequisites

**Read `SKILL.md` first** to understand available commands, flags, and expected
behavior.

______________________________________________________________________

## Test 1: Read Logs

**Prompt:** "How can I check the latest errors in the Chrome log on my test
device via SSH?"

**Verify:** - Output explains that logs are in `/var/log/chrome/chrome`. -
Output provides the correct `ssh` and `grep` command.
