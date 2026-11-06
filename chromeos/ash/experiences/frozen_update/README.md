---
type: readme
title: ChromeOS Flex frozen update notifications
summary: Explains that the directory implements ChromeOS Flex frozen update notifications for devices whose GPUs cannot support GLES3 or higher.
relations:
  - references /chromeos/ash/experiences/frozen_update/frozen_update_gpu_list.json
---

This directory hosts ChromeOS Flex Frozen Update Notifications implementation.

These notifications target devices identified by GPU PCIIDs located in
`frozen_update_gpu_list.json` which are devices which cannot support GLES3+.

Devices were selected by data collected from go/hwis and can be seen at
go/flex-gles2-deprecation-gpus.
