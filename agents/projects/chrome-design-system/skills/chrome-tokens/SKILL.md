---
name: chrome-tokens
description: Use this skill when you need to reference Chrome Design System token data or generate a token map.
type: config
title: Chrome Tokens Skill Definition
summary: Skill manifest that describes when to use the chrome-tokens skill and points to the token map and token map generation instructions in the references folder.
relations:
  - references /agents/projects/chrome-design-system/skills/chrome-tokens/references/tokens.md
  - references /agents/projects/chrome-design-system/skills/chrome-tokens/references/generate-token-map.md
---

# Chrome Tokens

## Token map

Token information is contained in the token map
([references/tokens.md](./references/tokens.md)), which maps Figma variables to
equivalent variables/constants in code across platforms. Reference this to help
with cross-platform translation, such as to find out what CSS variable
corresponds to a specific variable in Figma.

## Generating a token map

To generate the token map, refer to the instructions in
[references/generate-token-map.md](./references/generate-token-map.md).
