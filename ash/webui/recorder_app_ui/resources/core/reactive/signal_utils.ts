// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Utility for slicing a property from a signal
// summary: Provides signalSlice, which derives a writable signal bound to a single key of an object signal's value.
// ---

import type {Signal} from './signal.js';
import {computed} from './signal.js';

/**
 * Derive a signal from the sub-object of the original signal.
 */
export function signalSlice<T, K extends keyof T>(
  signal: Signal<T>,
  key: K,
): Signal<T[K]> {
  return computed({
    get: (): T[K] => signal.value[key],
    set: (val: T[K]) => {
      signal.update((s) => ({
                      ...s,
                      [key]: val,
                    }));
    },
  });
}
