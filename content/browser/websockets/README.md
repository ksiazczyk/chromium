---
type: readme
title: WebSocket service
summary: Explains that the directory hosts the network.mojom.WebSocket implementation, bridging Blink's WebSocket API over Mojo to the protocol implementation in net/websockets.
---

# WebSocket service

This directory contains the network.mojom.WebSocket implementation. It hosts
the WebSocket API implementations in Blink over Mojo, and exports the WebSocket
protocol implementation in net/websockets/ as a service.
