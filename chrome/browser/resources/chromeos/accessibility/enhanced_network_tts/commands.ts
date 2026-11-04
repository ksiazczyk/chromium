// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Command enums for offscreen messaging
// summary: Defines the OffscreenCommand and ServiceWorkerCommand enums used for messages between the service worker and the offscreen document.
// ---

/**
 * The commands that can be sent to the offscreen document from the service
 * worker.
 */
export enum OffscreenCommand {
  DECODE_AUDIO = 'decodeAudio',
}

/**
 * The commands that can be sent to the service worker from the offscreen
 * document.
 */
export enum ServiceWorkerCommand {
  READY = 'ready',
}
