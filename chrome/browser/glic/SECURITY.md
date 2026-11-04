---
type: note
title: Security model for Glic-hosted content
summary: Explains that remotely delivered Glic content is trusted and exempt from the typical website threat model.
relations:
  - references /chrome/browser/resources/glic/glic_api/glic_api.ts
---

The remotely delivered contents that is hosted by //chrome/browser/glic is not a
website. It is not subject to the typical threat model applied to websites.
Additional capabilities are exposed via
chrome/browser/resources/glic/glic_api/glic_api.ts, and the contents is trusted
to use those capabilities appropriately.
