// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab picker module exports
// summary: Re-exports the tab picker app element and browser proxy used by the tab picker page.
// ---

import './tab_picker_app.js';

export {TabPickerAppElement} from './tab_picker_app.js';
export {TabPickerBrowserProxyImpl} from './tab_picker_browser_proxy.js';
export type {TabPickerBrowserProxy} from './tab_picker_browser_proxy.js';
