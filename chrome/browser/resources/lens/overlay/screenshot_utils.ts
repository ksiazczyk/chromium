// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Screenshot rendering utility
// summary: Utility that renders a screenshot bitmap into a given HTML canvas using a bitmaprenderer context.
// ---

import {assert} from '//resources/js/assert.js';

// Renders the given bitmap containing the screenshot in the given HTML canvas.
export function renderScreenshot(
    canvas: HTMLCanvasElement, screenshotBitmap: ImageBitmap) {
  const imageWidth = screenshotBitmap.width;
  const imageHeight = screenshotBitmap.height;

  canvas.width = imageWidth;
  canvas.height = imageHeight;

  // Put the screenshot in the ctx to render.
  const ctx = canvas.getContext('bitmaprenderer');
  assert(ctx);

  ctx.transferFromImageBitmap(screenshotBitmap);
}
