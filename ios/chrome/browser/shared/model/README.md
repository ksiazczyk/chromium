---
type: readme
title: Shared model folder
summary: Explains that this folder holds code shared by all model features, added only when widely reused, mainly to simplify DEPS dependency rules.
---

# Shared model folder

This folder only contains the code shared by all the model features.
It is here mostly to ease the DEPS rules: the model code can depend on all code
here.

Add code here only if it is likely to be shared by a significant number of
model features.

