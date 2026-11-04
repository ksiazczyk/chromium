// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Device module exports
// summary: Re-exports the camera manager, mode results, and camera configuration types as the public entry point of the device module.
// ---


export {CameraManager} from './camera_manager.js';
export {getDefaultScanCorners, setAvc1Parameters} from './mode/index.js';
export type {GifResult, PhotoResult, VideoResult} from './mode/index.js';
export {CameraInfo} from './type.js';
export type {CameraConfig, CameraUi, CameraViewUi} from './type.js';
