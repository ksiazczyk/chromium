---
type: readme
title: js_injection directory README
summary: Describes code used by WebView and iOS Blink WebContent to inject JavaScript from browser to renderer plus a message port style API, and advises manually running the ios-blink-rel-fyi trybot since no iOS builder blocks CQ.
---

This directory contains code used by WebView and WebContent[1] of iOS Blink to
inject javascript from the browser to the renderer, as well as a simple message
port style API.

As there is not an iOS builder blocking CQ, it is recommended to manually
trigger an `ios-blink-rel-fyi` trybot job when making changes to detect
breakages.

[1] https://source.chromium.org/chromium/chromium/src/+/main:ios/web/content/js_messaging/
