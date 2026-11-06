// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Game configuration interfaces for the dino game
// summary: Defines base and game mode configuration interfaces plus a ConfigProvider interface for retrieving the active game configuration.
// ---

/**
 * Default game configuration.
 * Shared config for all versions of the game. Additional parameters are
 * defined in GameModeConfig.
 */
export interface BaseConfig {
  audiocueProximityThreshold: number;
  audiocueProximityThresholdMobileA11y: number;
  bgCloudSpeed: number;
  bottomPad: number;
  // Scroll Y threshold at which the game can be activated.
  canvasInViewOffset: number;
  clearTime: number;
  cloudFrequency: number;
  fadeDuration: number;
  flashDuration: number;
  gameoverClearTime: number;
  initialJumpVelocity: number;
  invertFadeDuration: number;
  maxBlinkCount: number;
  maxClouds: number;
  maxObstacleLength: number;
  maxObstacleDuplication: number;
  resourceTemplateId: string;
  speed: number;
  speedDropCoefficient: number;
  arcadeModeInitialTopPosition: number;
  arcadeModeTopPositionPercent: number;
}

export interface GameModeConfig {
  acceleration: number;
  audiocueProximityThreshold: number;
  audiocueProximityThresholdMobileA11y: number;
  gapCoefficient: number;
  invertDistance: number;
  maxSpeed: number;
  mobileSpeedCoefficient: number;
  speed: number;
}

export type Config = BaseConfig&GameModeConfig;

/**
 * Interface to retrieve the current game configuration.
 */
export interface ConfigProvider {
  getConfig(): Config;
}
