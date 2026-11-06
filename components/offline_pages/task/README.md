---
type: readme
title: Task Queue subcomponent README
summary: Describes the Offline Pages Task Queue framework for sequencing asynchronous work and notes its temporary location for sharing with explore_sites code.
---

# Task Queue subcomponent

This subdirectory maintains the classes and tests for the Offline Pages Task
Queue, a general framework for sequencing work that may require multiple
asynchronous calls before completing.

This is located in `//components/offline_pages/task` as a temporary location so
that it can be shared with code in `//chrome/browser/android/explore_sites`
without depending on all the other unrelated code in offline pages. The
intention is that this code could be moved to a more general location and more
broadly used in the rest of Chrome.
