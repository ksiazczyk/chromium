// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Deployed version constant
// summary: Declares a constant that cca.py deploy overrides with a timestamp so developers can identify the deployed build status.
// ---

/**
 * Deployed version if CCA is deployed from cca.py deploy.
 *
 * This will be overridden by cca.py deploy with a simple string of deployed
 * timestamp, used only for developer to identify the deployed status.
 */
export const DEPLOYED_VERSION: string|undefined = undefined;
