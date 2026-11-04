// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Wallpaper Fullscreen Preview State Enum
// summary: Defines the FullscreenPreviewState enum used by the ChromeOS personalization app to track whether the wallpaper fullscreen preview is off, loading, or visible.
// ---

export enum FullscreenPreviewState {
  OFF = 'fullscreen_preview_off',
  LOADING = 'fullscreen_preview_loading',
  VISIBLE = 'fullscreen_preview_visible',
}
