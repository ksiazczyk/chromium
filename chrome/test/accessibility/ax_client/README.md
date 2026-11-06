---
type: readme
title: Accessibility Test Client
summary: Describes the ax_client out-of-process Windows accessibility client, its launcher and Mojo interface, and how browser tests extend and use it.
relations:
  - documents /chrome/browser/accessibility/browser_test_with_ax_client.h
  - documents /chrome/test/accessibility/ax_client/ax_client.test-mojom
  - documents /chrome/test/accessibility/ax_client/launcher.h
---

# Accessibility Test Client

`ax_client`, a test-only out-of-process accessibility client for Windows, is
used by browser tests to interact with a window's accessibility tree using
either the UI Automation (UIA) or IAccessible2 (IA2) APIs. Tests can use it to
evaluate scenarios where an accessibility tool (e.g., a screen reader) performs
specific operations against the browser under test.

## Overview

`ax_client.exe` is launched from a browser test via an
[`ax_client::Launcher`](./launcher.h) and driven via the interface defined in
[`ax_client.test-mojom`](./ax_client.test-mojom).

The launcher redirects the client's stdout and stderr to the parent test
process's respective streams so that `LOG` statements in the client are included
in tests' output.

## Extending

The [`ax_client::mojom::AxClient`](./ax_client.test-mojom) interface is meant to
be extended with new functionality as needed by tests. Developers should not shy
away from adding new methods.

## Usage

Tests will typically derive from
[`BrowserTestWithAxClient`](../../../browser/accessibility/browser_test_with_ax_client.h),
which includes methods for launching and interacting with `ax_client`.
