---
type: readme
title: Site Isolation support in chrome/browser/
summary: Explains that this directory holds chrome/browser-level site isolation code and tests for metrics, enterprise policies, and preferences not handled in content/.
---

# Site Isolation support in chrome/browser/

Most [Site
Isolation](https://www.chromium.org/Home/chromium-security/site-isolation/)
code can be found in [content/browser/](/content/browser/).

This directory handles chrome/browser/ level support for Site Isolation,
including code and tests for cases like metrics, enterprise policies,
preferences, and other features that cannot be handled within content/.
