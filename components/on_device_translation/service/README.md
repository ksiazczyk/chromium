---
type: readme
title: On-device translation service overview
summary: Describes the OnDeviceTranslationService, which checks translation support for language pairs and creates translators for the Web Translation blink API while running once in a utility process.
---

The OnDeviceTranslationService provides functionalities to check
if translation between a pair of source and target languages is
supported, and create translator for the pair. The translator
could be used by the Web Translation blink API.


The service runs in a utility process and it should be only launched
once.
