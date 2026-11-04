// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Shared Mojo page handler remote
// summary: Exports a shared Mojo PageHandler remote that the test page UI elements use to invoke browser-side handlers.
// ---

import {PageHandler} from './status_area_internals.mojom-webui.js';

export const pageHandler = PageHandler.getRemote();
