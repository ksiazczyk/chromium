// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake accelerator fetcher for shortcut input UI
// summary: Fake AcceleratorFetcher implementation that lets tests mock accelerator updates, observer registration, and the meta key to display.
// ---

import {FakeMethodResolver} from '../fake_method_resolver.js';

import type {AcceleratorAction} from './accelerator_actions.mojom-webui.js';
import type {AcceleratorFetcherInterface, AcceleratorFetcherObserverInterface} from './accelerator_fetcher.mojom-webui.js';
import type {StandardAcceleratorProperties} from './accelerator_info.mojom-webui.js';
import type {MetaKey} from './shortcut_utils.js';

export class FakeAcceleratorFetcher implements AcceleratorFetcherInterface {
  private methods = new FakeMethodResolver();
  private observers: AcceleratorFetcherObserverInterface[] = [];

  constructor() {
    this.methods.register('fakeMetaKeyToDisplay');
  }

  mockAcceleratorsUpdated(
      actionId: AcceleratorAction,
      accelerators: StandardAcceleratorProperties[]): void {
    for (const observer of this.observers) {
      observer.onAcceleratorsUpdated(actionId, accelerators);
    }
  }

  observeAcceleratorChanges(
      _actionIds: AcceleratorAction[],
      observer: AcceleratorFetcherObserverInterface): void {
    this.observers.push(observer);
  }

  setMetaKeyToDisplay(metaKey: MetaKey): void {
    this.methods.setResult('fakeMetaKeyToDisplay', metaKey);
  }

  getMetaKeyToDisplay(): Promise<{metaKey: MetaKey}> {
    return this.methods.resolveMethod('fakeMetaKeyToDisplay');
  }
}
