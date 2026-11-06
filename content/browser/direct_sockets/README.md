---
type: readme
title: Direct Sockets API (content/browser/direct_sockets)
summary: Describes the browser-process service and security checks for the Direct Sockets API, which lets Isolated Web Apps open raw TCP and UDP connections.
relations:
  - references /components/webapps/isolated_web_apps/README.md
  - documents /content/browser/direct_sockets/direct_sockets_service_impl.cc
---

# Direct Sockets API (`content/browser/direct_sockets`)

This directory implements the browser-process service and security checks for
the [Direct Sockets API](https://github.com/WICG/direct-sockets/blob/main/docs/explainer.md),
allowing Isolated Web Apps (IWAs) and isolated contexts to establish raw TCP
(`TCPSocket`, `TCPServerSocket`) and UDP (`UDPSocket`) connections.

## Companion Documentation

- **Core IWA Component:**
  [`//components/webapps/isolated_web_apps`](/components/webapps/isolated_web_apps/README.md)

## Architecture & Security Checks

`DirectSocketsServiceImpl` supports connections initiated from a
`RenderFrameHost`, `SharedWorkerHost`, or `ServiceWorkerVersion` (`Context`
`std::variant`) and enforces:

- **Context & Delegate Validation:**
  - For frames (`CreateForFrame`), verifies either
    (`HasIsolatedContextCapability(render_frame_host)` and
    `PermissionsPolicyFeature::kDirectSockets`) or
    `DirectSocketsDelegate::AreDirectSocketsAllowed()`.
  - For workers (`CreateForSharedWorker`, `CreateForServiceWorker`), verifies
    `IsIsolatedContext(RenderProcessHost*)`.
  - Validates each socket open request (`kTcp`, `kConnectedUdp`, `kBoundUdp`,
    `kTcpServer`) via `content::DirectSocketsDelegate::ValidateRequest*()`.
- **Permissions Policy & Local Network Access:** Enforces
  `PermissionsPolicyFeature::kDirectSockets` and
  `PermissionsPolicyFeature::kMulticastInDirectSockets`, and requests
  `blink::PermissionType::LOCAL_NETWORK` or
  `blink::PermissionType::LOOPBACK_NETWORK` via `PermissionController` when
  connecting or binding to non-public IP addresses.
- **ChromeOS Firewall Integration (`FirewallHoleDelegate`):** Opens and manages
  scoped OS firewall holes for listening TCP/UDP server sockets on ChromeOS.

When requests pass these security checks, `DirectSocketsServiceImpl` forwards
socket creation to the sandboxed Network Service (`network::mojom::NetworkContext`).
