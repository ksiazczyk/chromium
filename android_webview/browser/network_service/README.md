---
type: readme
title: Android WebView Network Service
summary: Explains the folder's code for interacting with the Network Service, its in-process mode, and how to test with the service always enabled.
relations:
  - references /android_webview/docs/test-instructions.md
  - references /services/network/README.md
---

# Android WebView Network Service

This folder contains Android WebView's code for interacting with the Network
Service. For details on the Network Service in general, see
[`//services/network/`](/services/network/README.md).

*** note
**Note:** M77 is the last milestone to support the legacy (non-Network-Service)
code path.
***

## In-process

Android WebView aims to run with the Network Service in-process
(`features::kNetworkServiceInProcess`). For details, see
https://crbug.com/882650. This feature is enabled by default, so there's no need
to locally enable it.

## Testing with the Network Service

Please see [general testing
instructions](/android_webview/docs/test-instructions.md). There is no need to
modify flags because the Network Service is always enabled.
