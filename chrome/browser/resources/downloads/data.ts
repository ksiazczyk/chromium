// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview Typedef to allow augmentation of Data objects sent from C++ to
 * JS for chrome://downloads.
 */

// ---docerion
// type: source
// title: Mojo data interface augmentation
// summary: TypeScript interface extending the Mojo Data type with an optional hideDate flag for data passed from C++ to the downloads page front end.
// ---

import type {Data} from './downloads.mojom-webui.js';

export interface MojomData extends Data {
  hideDate?: boolean;
}
