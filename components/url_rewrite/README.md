---
type: readme
title: URL Rewrite component README
summary: Describes how the component adjusts URLRequests using UrlRequestRewrite mojom rules, set via UrlRequestRulesReceiver and applied by a URLLoaderThrottle.
---

The URL Rewrite component provides utilities that allow adjusting URLRequest
based on the provided URL rewrite rules defined in UrlRequestRewrite mojom.

The UrlRequestRulesReceiver mojom interface is used by browser process to set
renderer process rewrite rules.

The URLLoaderThrottle implementation applies the rewrite rules to the
URLRequest.
