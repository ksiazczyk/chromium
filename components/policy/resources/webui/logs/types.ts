// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview Types for objects sent from C++ to chrome://policy/logs.
 */

// ---docerion
// type: source
// title: TypeScript types for policy logs data
// summary: Declares interfaces for version info objects sent from the C++ policy UI handler to the logs page.
// ---

/**
 * The type of the version info result object. The definition is based on
 * chrome/browser/ui/webui/policy/policy_ui_handler.cc: GetVersionInfo()
 */
export interface VersionInfo {
  version: string;
  revision: string;
  deviceOs: string;
  variations: string[];
}
