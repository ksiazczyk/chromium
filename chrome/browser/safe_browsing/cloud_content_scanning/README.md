---
type: readme
title: Cloud content scanning directory overview
summary: Explains that the directory holds cloud scanning code shared between upload and download scanning, and points feature-specific code to other directories.
---

This directory includes cloud scanning code that is shared across user uploads
and user downloads scanning features. This includes:
  * Chrome Enterprise Connectors that scan content.
  * Chrome Advanced Protection Program file download scans.

Code specific to user downloads cloud scanning should be added to
`//chrome/browser/safe_browsing/download_protection/` instead.

Code specific to user uploads cloud scanning or Chrome Enterprise Connectors
should be added to `//chrome/browser/enterprise/connectors/` instead.
