// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Media devices proxy
// summary: Static proxy around navigator.mediaDevices that allows tests to substitute a custom MediaDevices instance.
// ---

let mediaDevicesInstance: MediaDevices|null = null;

export class MediaDevicesProxy {
  static getMediaDevices(): MediaDevices {
    return mediaDevicesInstance || navigator.mediaDevices;
  }

  static setMediaDevicesForTesting(obj: MediaDevices): void {
    mediaDevicesInstance = obj;
  }
}
