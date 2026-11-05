---
type: readme
title: Agent Skills
summary: Describes the web_applications-specific agent skills directory and how to install a skill into a workspace via a symlink with the gemini CLI.
relations:
  - references /agents/skills/README.md
---

# Agent Skills

This directory contains specialized Agent Skills for Chromium development in the
web_applications directory. Because these are pretty specific to just this
directory, they are stored separately from the
[global agent skill area](../../../../../agents/skills/README.md)

## How to Use

To use a skill, you must first install it into your workspace. Creating a
symlink is preferred so that the skill stays up-to-date when you sync your local
checkout:

```bash
gemini skills link chrome/browser/web_applications/docs/skills/<skill-name> --scope workspace
```
