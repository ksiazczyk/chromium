// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Entry module for the history clusters side panel
// summary: Entry module that imports the app element and re-exports history clusters and history embeddings browser proxies and types for the WebUI.
// ---

import './app.js';

export {browserProxyFactory as historyClustersBrowserProxyFactory, PageCallbackRouter, PageHandlerRemote} from 'chrome://resources/cr_components/history_clusters/history_clusters.mojom-webui.js';
export {browserProxyFactory as historyEmbeddingsBrowserProxyFactory} from 'chrome://resources/cr_components/history_embeddings/history_embeddings.mojom-webui.js';
export type {BrowserProxy as HistoryEmbeddingsBrowserProxy} from 'chrome://resources/cr_components/history_embeddings/history_embeddings.mojom-webui.js';
export {PageHandlerRemote as HistoryEmbeddingsPageHandlerRemote} from 'chrome://resources/cr_components/history_embeddings/history_embeddings.mojom-webui.js';
export type {HistoryClustersAppElement} from './app.js';
