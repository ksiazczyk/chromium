// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview Definitions for chrome.metricsPrivateIndividualApis API
 * Generated from: extensions/common/api/metrics_private_individual_apis.json
 * run `tools/json_schema_compiler/compiler.py
 * extensions/common/api/metrics_private_individual_apis.json -g ts_definitions`
 * to regenerate.
 */

// ---docerion
// type: source
// title: TypeScript definitions for chrome.metricsPrivateIndividualApis
// summary: Declares generated functions for the chrome.metricsPrivateIndividualApis API for recording user actions, medium time, and enumeration metrics.
// ---



declare namespace chrome {
  export namespace metricsPrivateIndividualApis {

    export function recordUserAction(name: string): void;

    export function recordMediumTime(metricName: string, value: number): void;

    export function recordEnumerationValue(
        metricName: string, value: number, enumSize: number): void;

  }
}

