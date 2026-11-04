// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Preload images type declarations
// summary: Declares the list of image files to preload and a map of SVG file names to their content as lit templates.
// ---

import type {TemplateResult} from 'chrome://resources/mwc/lit/index.js';

export const preloadImagesList: string[];

/**
 * Mapping of SVG file name to it's content as lit template.
 */
export const preloadedImages: Map<string, TemplateResult>;
