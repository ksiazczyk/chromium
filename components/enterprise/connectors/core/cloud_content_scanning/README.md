---
type: readme
title: Cloud content scanning shared code overview
summary: Explains that this directory holds cloud scanning code shared by Safe Browsing and Chrome Enterprise Premium, and where CEP-specific code belongs.
---

This directory includes cloud scanning code that is shared across Safe Browsing (SB) and Chrome Enterprise Premium (CEP) features. This includes:
  * CEP: Chrome Enterprise Connectors that scan content.
  * SB: Chrome Advanced Protection Program file download scans.

Code specific to CEP should be added to the parent directory (`//components/enterprise/connectors/core`) instead.
