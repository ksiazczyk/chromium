// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FocusConfig type definition
// summary: Defines the FocusConfig type as a map from element identifiers to focus targets or focus callbacks.
// ---

export type FocusConfig = Map<string, (Element|(() => void))>;
