---
type: readme
title: gpu/ directory overview
summary: Describes the gpu/ directory, which holds viz APIs for accessing GPU services, and introduces the ContextProvider interface.
---

# gpu/

This directory contains viz APIs for access to the gpu services.

## ContextProvider

The primary interface to control access to the gpu and lifetime of client-side
gpu control structures (such as the GLES2Implementation that gives access to
the command buffer).
