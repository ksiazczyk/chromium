---
type: readme
title: System DNS resolution overview
summary: Explains that Mojo-based system DNS resolution lets sandboxed processes resolve DNS on Android and some Linux systems instead of calling getaddrinfo, and links the design doc.
---

On certain systems, system DNS resolution cannot run sandboxed. This includes
Android and some Linux systems. This directory contains Mojo implementations of
system DNS resolution so that sandboxed processes can use Mojo for system DNS
resolution, rather than getaddrinfo() or another system DNS resolution routine.

For more info, see the [design doc for servicified system DNS resolution](https://docs.google.com/document/d/18cVwhfOHVO2RFzBUpG9xmjmkci5J_rF0FagWe71uKBU/edit?usp=sharing).
