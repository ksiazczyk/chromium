// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Keyboard backlight state definition
// summary: Defines the KeyboardBacklightState interface and an emptyState factory holding the current backlight state, nudge flag, and wallpaper color.
// ---

import type {SkColor} from 'chrome://resources/mojo/skia/public/mojom/skcolor.mojom-webui.js';

import type {CurrentBacklightState} from '../../personalization_app.mojom-webui.js';

/**
 * Stores keyboard backlight related states.
 */
export interface KeyboardBacklightState {
  currentBacklightState: CurrentBacklightState|null;
  shouldShowNudge: boolean;
  wallpaperColor: SkColor|null;
}

export function emptyState(): KeyboardBacklightState {
  return {
    currentBacklightState: null,
    shouldShowNudge: false,
    wallpaperColor: null,
  };
}
