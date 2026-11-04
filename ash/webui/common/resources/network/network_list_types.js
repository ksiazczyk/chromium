// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview
 * This file contains typedefs properties for NetworkList, shared by
 * NetworkListItem.
 */

// ---docerion
// type: source
// title: Network list typedefs
// summary: JavaScript typedefs and custom item enum for NetworkList, shared by the network list item element.
// ---

import {OncMojo} from './onc_mojo.js';

export const NetworkList = {};

/** @enum {number} */
NetworkList.CustomItemType = {
  OOBE: 1,
  ESIM_PENDING_PROFILE: 2,
  ESIM_INSTALLING_PROFILE: 3,
};

/**
 * Custom data for implementation specific network list items.
 * @typedef {{
 *   customItemType: NetworkList.CustomItemType,
 *   customItemName: string,
 *   customItemSubtitle: string,
 *   polymerIcon: (string|undefined),
 *   customData: (!Object|undefined),
 *   showBeforeNetworksList: boolean,
 * }}
 */
NetworkList.CustomItemState;

/** @typedef {OncMojo.NetworkStateProperties|NetworkList.CustomItemState} */
NetworkList.NetworkListItemType;
