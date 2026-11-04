// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MV2 deprecation delegate interface
// summary: Interface exposing a method to dismiss the Manifest V2 deprecation notice.
// ---

export interface Mv2DeprecationDelegate {
  dismissMv2DeprecationNotice(): void;
}
