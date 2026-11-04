// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FocusConfig type definition
// summary: Defines the FocusConfig type, a map from keys to strings, elements, or callbacks used for focus handling in the settings UI.
// ---

export type FocusConfig = Map<string, (string|Element|(() => void))>;
