---
type: readme
title: ScopedProfileKeepAlive
summary: Explains that ScopedProfileKeepAlive is a strong reference to a refcounted Profile and points to broader profile lifetime best practices.
relations:
  - references /chrome/browser/profiles/README.md
---

# ScopedProfileKeepAlive

`ScopedProfileKeepAlive` is a strong reference to a `Profile` object, which is
refcounted when the DestroyProfileOnBrowserClose flag is enabled. It is very
similar to `ScopedKeepAlive`, which is for the browser process.

For other best practices related to managing the lifetime of a `Profile`,
please see the "Managing lifetime of a Profile" section in
//chrome/browser/profiles/README.md.
