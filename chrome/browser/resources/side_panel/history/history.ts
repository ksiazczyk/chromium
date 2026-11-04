// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Entry module for the history side panel
// summary: Imports the app element and re-exports history and history embeddings mojom bindings for the WebUI.
// ---

import './app.js';

export {PageCallbackRouter, PageHandlerRemote} from 'chrome://resources/cr_components/history/history.mojom-webui.js';
export {browserProxyFactory as historyEmbeddingsBrowserProxyFactory} from 'chrome://resources/cr_components/history_embeddings/history_embeddings.mojom-webui.js';
export type {BrowserProxy as HistoryEmbeddingsBrowserProxy} from 'chrome://resources/cr_components/history_embeddings/history_embeddings.mojom-webui.js';
export {PageHandlerRemote as HistoryEmbeddingsPageHandlerRemote} from 'chrome://resources/cr_components/history_embeddings/history_embeddings.mojom-webui.js';
export type {HistoryAppElement} from './app.js';
