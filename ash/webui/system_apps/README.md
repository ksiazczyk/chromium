---
type: readme
title: System Apps
summary: Describes shared libraries used by System Web Applications and System Web Extensions, including the message_pipe.js communication library.
relations:
  - documents /ash/webui/eche_app_ui/resources/message_pipe.js
---

# System Apps
Contains shared libraries used by System Web Applications and System Web
Extensions.

## message_pipe.js
Library for communicating between two Javascript contexts e.g. main frame and
iframe, main frame and worker, etc. The library provides a promise-based API on
top of postMessage().
