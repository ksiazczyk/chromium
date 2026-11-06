---
type: readme
title: Controlled Frame renderer implementation overview
summary: Explains the renderer-side Controlled Frame components for Isolated Web Apps and links to companion common and browser documentation.
relations:
  - references /chrome/browser/controlled_frame/README.md
  - references /chrome/common/controlled_frame/README.md
  - documents /chrome/renderer/controlled_frame/web_url_pattern_natives.cc
---

# Controlled Frame Renderer Implementation (`chrome/renderer/controlled_frame`)

This directory contains the renderer-process C++ bindings and native handlers
for the `<controlledframe>` element in Isolated Web Apps (IWAs).

## Companion Documentation

- **Common Controlled Frame Schemas:**
  [`//chrome/common/controlled_frame`](/chrome/common/controlled_frame/README.md)
- **Browser Controlled Frame Implementation:**
  [`//chrome/browser/controlled_frame`](/chrome/browser/controlled_frame/README.md)

## Key Components

- `ControlledFrameExtensionsRendererAPIProvider`: Registers custom JavaScript
  modules (`//chrome/renderer/resources/controlled_frame/`) and native handlers
  into the Blink script context when Controlled Frame is available.
- `WebUrlPatternNatives` (`web_url_pattern_natives.{h,cc}`): Implements the
  native V8 handler (`URLPatternToMatchPatterns`) translating `blink::URLPattern`
  instances (or `URLPatternInit` inputs) into extension `URLPattern`
  match-pattern strings for `<controlledframe>` web request and content script
  rules.
