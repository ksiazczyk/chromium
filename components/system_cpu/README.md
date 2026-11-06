---
type: readme
title: system_cpu directory overview
summary: Describes classes for collecting CPU usage from the OS via system_cpu::CpuProbe, supporting Linux/ChromeOS, Mac, and Windows.
---

This directory contains classes for collecting CPU usage from the operating
system. `system_cpu::CpuProbe` is a base class that provides a common interface
across different platforms and acts as a dependency injection point for tests.
Currently supports Linux/ChromeOS, Mac, and Windows.