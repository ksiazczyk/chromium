---
type: readme
title: Data protection directory overview
summary: Explains that the directory provides shared abstractions over multiple data protection features for other chrome/ code, and directs single-feature users elsewhere.
---

This directory contains classes and utility functions that use code from
different data protection features and provide abstractions to other
`chrome/` code. If your code only interacts with one data protection feature,
do not use this directory and instead use
`chrome/browser/enterprise/connectors/`, `chrome/browser/enterprise/data_controls/`, etc.
