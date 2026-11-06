// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Dino game environment constants
// summary: Exports platform detection flags for iOS, HiDPI, mobile and RTL plus the frame rate and default canvas dimensions.
// ---

import type {Dimensions} from './dimensions.js';

// TODO(salg): Use preprocessor to filter IOS code at build time.
export const IS_IOS: boolean = /CriOS/.test(window.navigator.userAgent);

export const IS_HIDPI: boolean = window.devicePixelRatio > 1;

export const IS_MOBILE: boolean =
    /Android/.test(window.navigator.userAgent) || IS_IOS;

export const IS_RTL: boolean = document.documentElement.dir === 'rtl';


// Frames per second.
export const FPS: number = 60;

export const DEFAULT_DIMENSIONS: Dimensions = {
  width: 600,
  height: 150,
};
