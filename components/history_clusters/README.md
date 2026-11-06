---
type: readme
title: History clusters component overview
summary: Explains that this directory implements the Chrome Memories history clustering service as a layered component to allow omnibox dependencies and iOS compatibility.
---

# //components/history_clusters

Service implementation for Chrome Memories history clustering feature.

Memories is implemented as a [a layered component](https://sites.google.com/a/chromium.org/dev/developers/design-documents/layered-components-design).

This was done to allow the component to depend on //components/omnibox as well
as to enable iOS compatibility.
