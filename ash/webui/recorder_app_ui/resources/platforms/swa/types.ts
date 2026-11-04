// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview This file re-export all used mojo types from generated
 * .mojom-webui.ts files. This makes it easier to mock all the imports on dev /
 * bundle.
 */

// ---docerion
// type: source
// title: Mojo type re-exports for Recorder App SWA
// summary: Re-exports all Mojo types used by the SWA platform from generated mojom-webui files so imports can be mocked easily during development and bundling.
// ---

export {
  InputSource,
  LoadModelResult,
  OnDeviceModelRemote,
  type ResponseChunk,
  type ResponseSummary,
  SessionRemote,
  StreamingResponderCallbackRouter,
} from '../../mojom/on_device_model.mojom-webui.js';
export {
  FormatFeature,
  SafetyFeature,
} from '../../mojom/on_device_model_service.mojom-webui.js';
export {
  type LangPackInfo,
  type ModelInfo,
  type ModelState,
  ModelStateMonitorReceiver,
  ModelStateType,
  PageHandler,
  type PageHandlerRemote,
  QuietModeMonitorReceiver,
} from '../../mojom/recorder_app.mojom-webui.js';
export {
  type SodaClientInterface,
  SodaClientReceiver,
  SodaRecognizerRemote,
} from '../../mojom/soda.mojom-webui.js';
