---
type: readme
title: Shared Coordinator folder
summary: Explains that this folder holds code shared by coordinators, added mainly to simplify DEPS rules, and should only contain widely shared coordinator code.
---

# Shared Coordinator folder

This folder only contains the code shared by the coordinators. It is here
mostly to ease the DEPS rules: the coordinator code can depend on all code
here.

Add code here only if it is likely to be shared by a significant number of
coordinators (for example the main coordinator class, the command
dispatcher...).

