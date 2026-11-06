// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Image sprite provider interface for the dino game
// summary: Defines the ImageSpriteProvider interface used to fetch the sprite sheets and sprite definitions shared across the dino game.
// ---

import type {SpriteDefinition} from './offline_sprite_definitions.js';

/**
 * Interface to retrieve the different image sprite sheets shared across the
 * dino game.
 */
export interface ImageSpriteProvider {
  getOrigImageSprite(): HTMLImageElement;
  getRunnerImageSprite(): HTMLImageElement;
  getRunnerAltGameImageSprite(): HTMLImageElement|null;
  getAltCommonImageSprite(): HTMLImageElement|null;
  getSpriteDefinition(): SpriteDefinition;
}
