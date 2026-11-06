---
type: readme
title: data_decoder service overview
summary: Explains that the service decodes untrusted data in an isolated sandboxed process and excludes protobuf.
---

The data_decoder service exists to facilitate safe data decoding within an
isolated sandboxed process.

NOTE: Protobuf is considered robust enough to decode untrusted input even
without sandboxing. So you won't find a protobuf decoder in this service.
