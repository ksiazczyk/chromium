---
type: readme
title: webdata_services component overview
summary: Explains that the component provides wrappers for services built on the single web database and ties their creation and destruction together.
---

The webdata services component contains the wrappers used to access the specific
services built atop the web database (see //components/webdata/).  Because there
is a single database instance, the various services accessing different tables
are created and destroyed together, and this component is what does that tying
together.
