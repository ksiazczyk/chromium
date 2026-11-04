/* Copyright 2025 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file. */

// ---docerion
// type: source
// title: Signout confirmation module exports
// summary: Entry module re-exporting the app element, extensions section, browser proxy, and Mojo types for the dialog.
// ---

import './signout_confirmation_app.js';

export {SignoutConfirmationBrowserProxyImpl} from './browser_proxy.js';
export type {SignoutConfirmationBrowserProxy} from './browser_proxy.js';
export {ExtensionsSectionElement} from './extensions_section.js';
export {PageCallbackRouter, PageRemote} from './signout_confirmation.mojom-webui.js';
export type {PageHandlerInterface, SignoutConfirmationData} from './signout_confirmation.mojom-webui.js';
export {SignoutConfirmationAppElement} from './signout_confirmation_app.js';
