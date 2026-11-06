---
type: note
title: Security considerations for the on-device model service
summary: Explains that the service runs in a process shared by all sites and built-in features, so compromising it could disclose cross-site information.
---

# Security Considerations for On-Device Model Service

This document outlines key security considerations for the On-Device Model Service (located in `//services/on_device_model`).

## Privilege and Process Isolation

This code executes in a process that is shared between all sites and Chrome built-in features.

**Therefore, compromising this process could lead to cross-site information disclosure.**
