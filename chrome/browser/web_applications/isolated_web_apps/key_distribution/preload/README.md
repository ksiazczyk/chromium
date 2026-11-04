---
type: readme
title: Iwa Key Distribution Component Preload
summary: Explains that the folder holds preloaded data for the IWA Key Distribution Component and how the textproto is converted and copied during the build.
relations:
  - documents /chrome/browser/web_applications/isolated_web_apps/key_distribution/preload/key_distribution.textproto
---

# Iwa Key Distribution Component Preload

This folder contains preloaded data for the IWA Key Distribution Component.

The `key_distribution.textproto` file is converted to `iwa-key-distribution.pb`
during build time and then copied to `/IwaKeyDistribution/` together with
`manifest.json`.
