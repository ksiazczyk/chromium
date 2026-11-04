---
type: readme
title: Safe Browsing Android directory overview
summary: Explains that the directory holds native-Java bridge classes and Java Safe Browsing classes such as the Android settings UI.
---

This directory contains bridge classes that connect between native and Java as
well as pure Java classes (e.g. Safe Browsing settings UI on Android).

New Java class is preferred to be added in this directory instead of
chrome/android/java/src/org/chromium/chrome/browser/safe_browsing/ unless it has
dependency in chrome/android.
