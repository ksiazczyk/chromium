---
type: readme
title: Extensions directory overview
summary: Describes the core Chrome extension system implementation and links to docs on build flags, app types, features, bindings, and events.
relations:
  - references /chrome/common/extensions/api/_features.md
  - references /content/README.md
  - references /extensions/docs/buildflags.md
---

This directory implements the core parts of Chrome's extension system, and can
be used with any host of the [content module](/content/README.md).

Some extensions code that is not Chrome-specific still lives in
[//chrome/browser/extensions](/chrome/browser/extensions) and will be moved
here.

Technical Documentation:

*   [Build flags](/extensions/docs/buildflags.md) - ENABLE_EXTENSIONS,
    ENABLE_EXTENSIONS_CORE, etc.

*   [Extension and App Types](/extensions/docs/extension_and_app_types.md)

*   [Features System](/chrome/common/extensions/api/_features.md)

*   [Bindings System](/extensions/renderer/bindings.md)

*   [Extension events](/extensions/docs/events.md)
