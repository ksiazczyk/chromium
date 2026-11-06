// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Utilities for formatting key and trust level values
// summary: Helper functions that map key trust levels, key types, and sync response codes to human-readable strings.
// ---

import type {Int32Value} from './connectors_internals.mojom-webui.js';
import {KeyTrustLevel, KeyType} from './connectors_internals.mojom-webui.js';

const TrustLevelStringMap = {
  [KeyTrustLevel.UNSPECIFIED]: 'Unspecified',
  [KeyTrustLevel.HW]: 'HW',
  [KeyTrustLevel.OS]: 'OS',
  [KeyTrustLevel.OS_SOFTWARE]: 'OS Storage',
};

const KeyTypeStringMap = {
  [KeyType.UNKNOWN]: 'Unknown',
  [KeyType.RSA]: 'RSA',
  [KeyType.EC]: 'EC',
};

export function trustLevelToString(trustLevel: KeyTrustLevel): string {
  return TrustLevelStringMap[trustLevel] || 'invalid';
}

export function keyTypeToString(keyType: KeyType): string {
  return KeyTypeStringMap[keyType] || 'invalid';
}

export function keySyncCodeToString(
    syncKeyResponseCode: (Int32Value|null|undefined)): string {
  if (!syncKeyResponseCode) {
    return 'Undefined';
  }

  const value = syncKeyResponseCode.value;
  if (value / 100 === 2) {
    return `Success (${value})`;
  }
  return `Failure (${value})`;
}
