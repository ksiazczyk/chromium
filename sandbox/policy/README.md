---
type: readme
title: Sandbox Policies
summary: Explains that this directory provides concrete sandbox policies for process types and Mojo services, integrating the core sandboxing library with the content, services, and chrome layers.
relations:
  - references /chrome/README.md
  - references /content/README.md
  - references /services/README.md
---

# Sandbox Policies

This directory integrates the lower-level core sandboxing library with the
[`//content`](../../content/README.md),
[`//services`](../../services/README.md), and
[`//chrome`](../../chrome/README.md) layers. It provides concrete security
policies for specific process types and Mojo services, whereas the library
provided by `//sandbox` is a generic sandboxing primitive.

Code in this directory (or other directories) may freely depend on code in
the core `//sandbox` library, but the `//sandbox/{mac,linux,win}` directories
may not depend on this policy component.
