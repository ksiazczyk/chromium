// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Drive slice of the Files App store
// summary: Defines the Drive store slice and a reducer that updates the Drive connection type and offline reason in the Files App state.
// ---

import {Slice} from '../../lib/base_store.js';
import type {State} from '../../state/state.js';

/**
 * @fileoverview Drive slice of the store.
 */

const slice = new Slice<State, State['drive']>('drive');
export {slice as driveSlice};

export const updateDriveConnectionStatus = slice.addReducer(
    'set-drive-connection-status', updateDriveConnectionStatusReducer);

function updateDriveConnectionStatusReducer(currentState: State, payload: {
  type: chrome.fileManagerPrivate.DriveConnectionStateType,
  reason?: chrome.fileManagerPrivate.DriveOfflineReason,
}): State {
  const drive: State['drive'] = {...currentState.drive};

  if (payload.type !== currentState.drive.connectionType) {
    drive.connectionType = payload.type;
  }

  if (payload.type ===
          chrome.fileManagerPrivate.DriveConnectionStateType.OFFLINE &&
      payload.reason !== currentState.drive.offlineReason) {
    drive.offlineReason = payload.reason;
  } else {
    drive.offlineReason = undefined;
  }

  return {...currentState, drive};
}
