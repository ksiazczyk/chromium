---
type: readme
title: iOS WebView overview
summary: Explains that ios/web_view builds an Objective-C framework rendering web content via CWVWebView, separate from Chrome for iOS.
relations:
  - references /ios/web_view/public/cwv_web_view.h
---

Contains code to build an Objective-C framework which renders web content with
`[CWVWebView]`. See the exposed API in `//ios/web_view/public/*` for more
details.

NOTE: This code is not used by Chrome for iOS (`//ios/chrome`), but is rather
a separate product/embedder of the `//ios/web` rendering layer.

[CWVWebView]: public/cwv_web_view.h