// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @fileoverview Definitions for chrome.send API */

// ---docerion
// type: source
// title: chrome.send API type definitions
// summary: Declares TypeScript types for the chrome.send API, including functions to send messages with parameters and get variable values.
// ---

declare namespace chrome {
  function send(msg: string, params?: any[]): void;
  function getVariableValue(name: string): string;
}
