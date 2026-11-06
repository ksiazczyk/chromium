---
type: readme
title: Web Package Rust Parser (components/web_package/rust)
summary: Describes the directory's no_std Rust implementation for safely parsing Web Bundle CBOR structures and exposing them to C++ via cpp_api_from_rust bindings.
---

# Web Package Rust Parser (`components/web_package/rust`)

This directory contains the memory-safe `#![no_std]` Rust implementation
(`web_package_rust`) for parsing Web Bundle (`.wbn`) CBOR structures and
exposing them to C++ via `cpp_api_from_rust` bindings (`web_package::rust`).

## Responsibilities

- Decoding Web Bundle section lengths, index sections, primary URLs, and
  response headers safely in Rust.
- Enforcing structural invariants before converting parsed metadata into
  `web_package::mojom` structures in `//components/web_package`.
