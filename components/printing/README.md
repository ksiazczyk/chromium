---
type: readme
title: Printing component overview
summary: Explains that the printing component holds code above the content layer, shared by embedders like Chrome, headless, and Android WebView, with foundational code in //printing.
---

The printing component contains code that lives above the content layer. It
allows multiple embedders, like `//chrome`, `//headless`, and
`//android_webview`, to share the code necessary to perform basic printing.
Foundational printing code lives in `//printing`.
