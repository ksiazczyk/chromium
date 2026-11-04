// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Parent access utilities
// summary: Utility that converts PNG byte arrays into base64-encoded data URLs for use as image sources.
// ---

export function getBase64EncodedSrcForPng(pngBytes: number[]): string {
  const image = btoa(String.fromCharCode(...pngBytes));
  return 'data:image/png;base64,' + image;
}
