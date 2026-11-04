---
type: readme
title: Chrome Tokens
summary: README for the chrome-tokens agent skill, explaining that it provides cross-platform knowledge of Chrome Design System tokens and noting caveats about Figma-based variables and overwriting tokens.md.
relations:
  - references /agents/projects/chrome-design-system/skills/chrome-tokens/references/figma-variables.md
  - references /agents/projects/chrome-design-system/skills/chrome-tokens/references/tokens.md
---

# Chrome Tokens

An agent skill that gives agents cross-platform knowledge of Chrome Design
System tokens.

## Notes and caveats

- The token map uses variables defined in Figma as a base. This means tokens
  defined in code that don't have a Figma equivalent are not represented.
- The file [figma-variables.md](./references/figma-variables.md) lists and
  categorizes all Figma variables, eliminating the need to read from Figma and
  make sense of the variables when creating the token map. While this makes
  token map output more deterministic, it also means if variables change in
  Figma, those changes will not be picked up. This will be addressed once the
  CDS data pipeline (for keeping things in sync) is matured.
- Running this skill will overwrite the existing `tokens.md` file. This could be
  updated in the future to update only what's necessary.
