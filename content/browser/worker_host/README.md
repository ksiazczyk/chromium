---
type: readme
title: Web Worker in Browser
summary: Describes how worker_host implements the browser side of dedicated and shared web workers, tracking security principals and brokering access to powerful web APIs.
---

# Web Worker in Browser

[content/browser/worker_host] implements the browser side of web workers
(dedicated workers and shared workers). It tracks the security principal of the
worker in the renderer and uses it to broker access to mojo interfaces providing
powerful web APIs. See: [Design doc].

The renderer side implementations are in [content/renderer/worker].

[content/browser/worker_host]: /content/browser/worker_host
[content/renderer/worker]: /content/renderer/worker

[Design doc]: https://docs.google.com/document/d/1Bg84lQqeJ8D2J-_wOOLlRVAtZNMstEUHmVhJqCxpjUk/edit?usp=sharing
