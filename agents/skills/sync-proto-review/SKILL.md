---
name: sync-proto-review
description: >-
  Reviews changes to Sync protobufs (components/sync/protocol/*.proto) for style,
  backwards/forwards compatibility, and companion updates. Use when reviewing
  CLs or diffs that modify Sync protos.
type: guide
title: Sync Proto Review skill instructions
summary: Defines an agent skill for reviewing changes to Sync protobufs, requiring evaluation against the components/sync/protocol README guidelines with linked citations.
relations:
  - references /components/sync/protocol/README.md
---

# Sync Proto Review

Changes to `components/sync/protocol/` have strict compatibility and style
requirements.

## Instructions

1. **Read Guidelines**: Read the local file `components/sync/protocol/README.md`
   completely before evaluating the change.
2. **Evaluate Changes**: Check the diff against EVERY guideline in the README.
3. **Citations**: When citing guidelines in review comments, link to
   `https://chromium.googlesource.com/chromium/src/+/main/components/sync/protocol/README.md`.
