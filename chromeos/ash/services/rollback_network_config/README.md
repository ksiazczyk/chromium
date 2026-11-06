---
type: readme
title: Rollback Network Config
summary: README for the Chrome OS Enterprise Rollback service that imports and exports network configurations to preserve during a rollback, with implementation in chrome/browser/ash/net.
---

# Rollback Network Config

This service provides support for Chrome OS Enterprise Rollback. It handles
importing and exporting network configurations to be preserved during a rollback.

The implementation of this service lives in
chrome/browser/ash/net/rollback_network_config because it has Chrome
dependencies.