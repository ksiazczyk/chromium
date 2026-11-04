---
type: readme
title: Google-Specific Browser-Related Utilities
summary: Explains the directory's purpose and documents how Google Update policy fetching works via the Mojo interface and the Policy Set JSON format.
relations:
  - references /docs/updater/history_log.md
  - documents /chrome/browser/google/google_update_policy_fetcher.cc
---

# Google-Specific Browser-Related Utilities

This directory contains utilities specific to the browser's use of Google
services and data, e.g. interfacing with the updater and mappings for brand
codes.

## Google Update Policy Fetching

The logic for fetching and parsing policies from the Google Update (Chromium
Updater) service for `chrome://policy` resides in this directory.

### Architecture
To ensure cross-platform consistency, Chrome uses the **Mojo interface**
(`GetSystemPoliciesJson`) to retrieve policy state from the updater. This
replaces legacy platform-specific methods (like COM on Windows).

### JSON Policy Format
The parsing logic in `google_update_policy_fetcher.cc` handles a JSON
blob emitted by the updater. The format follows the **"Policy Set"** complex type
defined in the updater's internal state serialization documentation:

*   **`policiesByName`**: Global/Machine-wide policies (e.g., `LastCheckPeriod`).
*   **`policiesByAppId`**: Per-application overrides, keyed by the application's
    GUID (e.g., `UpdatePolicy`).

For the full specification of the **Policy Set** type, see the
"Common Complex Types" section in [docs/updater/history_log.md](../../../docs/updater/history_log.md).
