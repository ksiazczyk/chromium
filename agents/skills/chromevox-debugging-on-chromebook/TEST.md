---
type: test
title: ChromeVox skill agent E2E test plan
summary: End-to-end test plan for verifying that an agent correctly explains how to toggle ChromeVox on a test device over SSH.
relations:
  - references /agents/skills/chromevox-debugging-on-chromebook/SKILL.md
---

# ChromeVox Debugging on Chromebook Skill - Agent E2E Test Plan

## Prerequisites

**Read `SKILL.md` first** to understand available commands, flags, and expected
behavior.

______________________________________________________________________

## Test 1: Toggle ChromeVox

**Prompt:** "Can you show me how to toggle ChromeVox on my test device using
SSH?"

**Verify:** - Output provides the `ssh` command to run the toggle script. -
Output mentions passing the correct device input node.
