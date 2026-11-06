---
type: readme
title: Safe Browsing Android directory overview
summary: Explains that this directory holds Android-only Safe Browsing classes, mostly native-Java bridge classes, and warns that Java interfaces may be overridden internally.
---

This directory contains classes that are only built against Android. Most of
them are bridge classes that connect between native and Java. Java interfaces
under this directory may be overridden in the internal repository.

When making changes to Java interfaces, please make sure the change doesn't
break internal builds.
