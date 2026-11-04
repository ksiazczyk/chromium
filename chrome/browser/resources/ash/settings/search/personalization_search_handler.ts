// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview
 * Provides functions used for personalization search, results of which link to
 * Personalization App.
 * Also provides a way to inject a test implementation for verifying
 * personalization search.
 */

// ---docerion
// type: source
// title: Personalization search handler accessor
// summary: Provides access to the personalization search Mojo handler whose results link to the Personalization App, and allows injecting a test implementation for verification.
// ---

import type {SearchHandlerInterface} from '../mojom-webui/personalization_search.mojom-webui.js';
import {SearchHandler} from '../mojom-webui/personalization_search.mojom-webui.js';

let personalizationSearchHandler: SearchHandlerInterface|null = null;

export function setPersonalizationSearchHandlerForTesting(
    testSearchHandler: SearchHandlerInterface): void {
  personalizationSearchHandler = testSearchHandler;
}

export function getPersonalizationSearchHandler(): SearchHandlerInterface {
  if (!personalizationSearchHandler) {
    personalizationSearchHandler = SearchHandler.getRemote();
  }

  return personalizationSearchHandler;
}
