---
type: readme
title: Dictation Test Extension
summary: Explains the dictation test extension that acts as a dictationPrivate provider for browser tests and how to run it in manual test mode or interactively.
relations:
  - references /chrome/browser/dictation/README.md
---

# Dictation Test Extension

This extension is used for testing the dictation implementation in
`chrome/browser/dictation/`.

It implements a dictation provider using the dictationPrivate private extension
API. When triggered by the browser, the extension returns a transcription.

This is loaded for browser tests, which load the extension in "manual test
mode" where the extension records events and allows the test to simulate the
extension's response.

This can also be run interactively. To use it, run chrome with
`--enable-features=Dictation:use_component_extension/false --allowlisted-extension-id=dfihfgggpgemecjdjahibncmmjlfjggp`
and load it as an unpacked extension. The extension's options page allows you
to set a canned response as the transcription (like in the automated tests).
Otherwise, the extension will use the microphone (like what a production
implementation would do, but with a different recognition service).
