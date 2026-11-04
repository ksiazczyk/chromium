---
trigger: glob
globs: "*.rs"
description: "Rules for writing Rust and C++/Rust interop in Chromium"
type: guide
title: Chromium Rust Directives
summary: Glob-triggered agent rule for Rust files in Chromium that directs authors to the FFI and unsafe guidelines and prefers rust_gtest_interop over test-attribute based tests.
---
# Chromium Rust Directives
- If the code you are writing requires FFI: avoid manually writing `extern "C"` FFI bindings between C/C++ and Rust. Instead follow the guidelines in `//docs/rust/ffi.md` whenever possible.
- If the code you are writing requires `unsafe`: follow the guidelines in `//docs/rust/unsafe.md`.
- When writing tests for Rust code, prefer using `//testing/rust_gtest_interop` over `#[test]`-based tests whenever possible.
