---
type: readme
title: Paint Preview Compositor overview
summary: Explains that the service composites SkPictures and metadata of webpages into bitmaps for renderer-free static replay.
---

Paint Preview Compositor is a service for compositing SkPictures and metadata
representing the painted contents of a webpage (collection of RenderFrames) into
bitmaps. These bitmaps can be consumed by a UI to replay a static version of a
webpage without a renderer (effectively a large screenshot represented by
paint-ops).
