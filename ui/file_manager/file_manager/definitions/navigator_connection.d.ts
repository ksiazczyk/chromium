// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview Definitions related to the navigation.connection.type API which
 *  is used to identify if a Chromebook is currently using an LTE connection.
 */

// ---docerion
// type: source
// title: Navigator connection type definitions
// summary: TypeScript definitions for the navigator.connection.type API used to detect whether a Chromebook is on an LTE or other network connection.
// ---

type ConnectionType =|'bluetooth'|'cellular'|'ethernet'|'mixed'|'none'|'other'|
    'unknown'|'wifi'|'wimax';

interface Navigator {
  connection: {type: ConnectionType};
}
