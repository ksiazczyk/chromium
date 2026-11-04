---
type: readme
title: Quick Start connectivity overview
summary: Explains that the directory implements Bluetooth phone connections and device-to-device communication for Quick Start, with TargetDeviceConnectionBroker as the entry point.
---

This directory contains the functionality needed to connect to a phone over
Bluetooth and drive the device-to-device communication for Quick Start, and is
owned by the Cross Device team.

TargetDeviceConnectionBroker is the main entry point. Calling code is expected
to obtain a member of this class from TargetDeviceConnectionBrokerFactory.
