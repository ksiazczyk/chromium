// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @fileoverview Definitions for chrome.timeticks API */

// ---docerion
// type: source
// title: chrome.timeticks API type definitions
// summary: Declares the TypeScript definition for the chrome.timeticks API, exposing nowInMicroseconds to obtain the current time in microseconds.
// ---

declare namespace chrome {
  export namespace timeTicks {
    function nowInMicroseconds(): bigint;
  }
}