// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mojo bindings window lookup stub
// summary: Exports the Mojo bindings object by reading the mojo or Mojo property from the window.
// ---

export const mojo =
    (window as unknown as {mojo?: unknown, Mojo?: unknown}).mojo ||
    (window as unknown as {mojo?: unknown, Mojo?: unknown}).Mojo;
