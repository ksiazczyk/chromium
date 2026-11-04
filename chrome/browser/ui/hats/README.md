---
type: readme
title: HaTS directory overview
summary: Explains that this directory holds Happiness Tracking Survey code that rate-limits and targets surveys per profile.
---

chrome/browser/ui/hats
=====================

This directory contains HaTS (Happiness Tracking Survey) code that is used to service the display of surveys launched from any trigger point within Chrome.

This code will coordinate with user's profiles to ensure that Chrome is not serving too many surveys to a single profile, only targeting profiles have UMA enabled, and not targeting enterprise users.

For Android specific code, see
[//chrome/browser/ui/android/hats](https://source.chromium.org/chromium/chromium/src/+/main:chrome/browser/ui/android/hats/)