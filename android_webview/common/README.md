---
type: readme
title: //android_webview/common/
summary: Explains that this folder holds WebView native code shared between processes and which layer dependencies it may have.
---

# //android\_webview/common/

This folder holds WebView's native code that is common between processes.

## Folder dependencies

`//android_webview/common/` cannot depend on other non-common WebView code, but
can depend on the content layer (and lower layers) as other embedders would
(ex. can depend on `//content/public/common/`).
