---
type: readme
title: WebView support library README
summary: Explains that the folder provides a shim layer between the AndroidX WebView APIs and WebView's implementation, plus folder dependencies.
relations:
  - references /android_webview/glue/README.md
---

# //android\_webview/support_library/

This folder contains a shim layer between the public AndroidX APIs
([`androidx.webkit.*`](https://developer.android.com/reference/androidx/webkit/package-summary))
and WebView's implementation, and allows them to (mostly) not directly depend
on each other.

## Folder Dependencies

`//android_webview/java/` must not depend on this directory.

## See Also

- [//android\_webview/glue/](/android_webview/glue/README.md)
