---
type: readme
title: Policy handlers directory overview
summary: Explains that this directory holds code handling individual ChromeOS policies that do not fit elsewhere and points to base classes for verifying policy values.
relations:
  - documents /chrome/browser/ash/policy/handlers/configuration_policy_handler_ash.h
---

chrome/browser/ash/policy/handlers
=======================================

This directory should contain code that handles individual policies
that do not fit in another subdirectory under `chrome/browser/ash/policy`.

The file `configuration_policy_handler_ash.h` contains multiple possible
base classes that can be used to verify policy values of different formats.

