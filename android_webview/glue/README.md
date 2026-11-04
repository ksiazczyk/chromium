---
type: readme
title: Overview of the //android_webview/glue shim layer
summary: Describes the glue folder as a shim layer between the public android.webkit APIs and WebView's implementation, including folder dependency rules and related documentation.
relations:
  - references /android_webview/support_library/README.md
---

# //android\_webview/glue/

This folder contains a shim layer between the public frameworks APIs
([`android.webkit.*`](https://developer.android.com/reference/android/webkit/package-summary))
and WebView's implementation, and allows them to (mostly) not directly depend
on each other.

## Folder Dependencies

`//android_webview/java/` must not depend on this directory.

## See Also

- [//android_webview/support_library/](/android_webview/support_library/README.md)
