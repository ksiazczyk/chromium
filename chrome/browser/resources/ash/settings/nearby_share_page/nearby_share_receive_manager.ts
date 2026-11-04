// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Nearby Share receive manager module
// summary: Module exposing singleton access to the Nearby Share receive manager and observer registration, with hooks for test overrides.
// ---

import type {ReceiveManagerInterface, ReceiveObserverInterface, ReceiveObserverRemote} from '/shared/nearby_share.mojom-webui.js';
import {ReceiveManager, ReceiveObserverReceiver} from '/shared/nearby_share.mojom-webui.js';

let receiveManager: ReceiveManagerInterface|null = null;
let isTesting = false;

export function setReceiveManagerForTesting(
    testReceiveManager: ReceiveManagerInterface): void {
  receiveManager = testReceiveManager;
  isTesting = true;
}

export function getReceiveManager(): ReceiveManagerInterface {
  if (!receiveManager) {
    receiveManager = ReceiveManager.getRemote();
  }
  return receiveManager;
}

export function observeReceiveManager(observer: ReceiveObserverInterface):
    ReceiveObserverReceiver|null {
  if (isTesting) {
    getReceiveManager().addReceiveObserver(observer as ReceiveObserverRemote);
    return null;
  }

  const receiver = new ReceiveObserverReceiver(observer);
  getReceiveManager().addReceiveObserver(receiver.$.bindNewPipeAndPassRemote());
  return receiver;
}
