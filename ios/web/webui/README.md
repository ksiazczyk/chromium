---
type: readme
title: iOS WebUI implementation overview
summary: Explains the iOS-specific implementation of WebUI pages, their use mainly for debug pages and web interstitials, and the MojoFacade-based communication between webpage JavaScript and native controllers.
---

This directory contains the iOS specific implementation of WebUI pages. Note
that while other platforms use WebUI as part of the primary UI, iOS uses web UI
primarily for "debug" pages. (Pages which render in the web view at `chrome://`
URLs.) The most visible Web UI surface on iOS is currently "web interstitials"
which are shared across all platforms including iOS.

WebUI on iOS uses mojo to communicate between the webpage JavaScript and the
native Web UI page controller code. This communication channel is implemented in
the MojoFacade class in this directory.

For more details about webui itself, see the webui docs at `//docs/webui*.md`
and the shared code at `//ui/webui/`
