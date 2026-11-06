---
type: readme
title: Captive portal component overview
summary: Explains that the captive portal component is layered, with core/ holding platform-independent code that cannot use the Content API and content/ holding //content-based platform code.
---

The captive portal component is a layered component. The core/ subdirectory
includes code shared across all platforms, including iOS; code in core/
cannot depend on the Content API. The content/ subdirectory, meanwhile, is
used only on //content-based platforms and can freely use the Content API.
