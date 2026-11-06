---
type: readme
title: Input event types directory overview
summary: Explains that the directory holds basic input event types shared across the input pipeline from the UI layer to CC and Blink, and warns against adding types unreachable from Blink.
---

This directory contains a set of basic types related to input events that can
be used across the input pipeline, from the UI layer down to consumers such as
CC and Blink.
Please do not add code/types that should not be reachable from Blink.
