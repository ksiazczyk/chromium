---
type: readme
title: WebView Shell
summary: Explains that the WebView shell is a test-only standalone application for testing WebView, warns against shipping it as a browser, and links to further documentation.
relations:
  - references /android_webview/docs/webview-shell.md
---

# WebView Shell

The WebView shell is a standalone application for testing WebView. For more
information, please see [the
documentation](/android_webview/docs/webview-shell.md).

This is *not* a production quality browser and does not implement suitable
security UI to be used for anything other than testing WebView. This should not
be shipped anywhere or used as the basis for implementing a browser.

To build a full-fledged browser for Android, we'd recommend building Chromium
for Android instead of using WebView:
https://www.chromium.org/developers/how-tos/android-build-instructions
