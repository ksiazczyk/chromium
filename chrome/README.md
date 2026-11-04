---
type: readme
title: Chrome directory overview
summary: Explains that the directory holds the open source application layer of Google Chrome for desktop, Android, and Chrome OS.
---

# Chrome

This directory contains the open source, application layer of Google Chrome.

Unlike other parts of Chromium like //content, which provide framework intended
to support multiple products, this directory contains code that is focused on
building specific products with opinionated UX.

Specific products include:
- Chrome desktop browser for Chrome OS, Windows, Mac and Linux
- Chrome mobile browser for Android
- Chrome OS system UI

See //ios/chrome for the Chrome mobile browser for iOS, and note that code that
is shared between //chrome and //ios/chrome is typically factored out into
//components.
