// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Video file MediaApp open tests
// summary: Integration tests verifying that video files from Downloads and Drive open in the MediaApp/Backlight viewer.
// ---

import {ENTRIES, RootPath} from '../test_util.js';

import {opensInMediaApp} from './open_media_app.js';

/**
 * Tests opening a video opens MediaApp/Backlight.
 * @param path Directory path (Downloads or Drive).
 */
async function opensVideoInMediaApp(path: string) {
  await opensInMediaApp(path, ENTRIES.world);
}

// Exports test functions.
export function videoOpenDrive() {
  return opensVideoInMediaApp(RootPath.DRIVE);
}

export function videoOpenDownloads() {
  return opensVideoInMediaApp(RootPath.DOWNLOADS);
}
