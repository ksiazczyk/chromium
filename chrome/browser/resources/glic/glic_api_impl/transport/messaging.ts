// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Glic transport messaging helper
// summary: Provides an assertNever helper function used for exhaustive type checks in the Glic API transport messaging code.
// ---

/* eslint-disable-next-line @typescript-eslint/naming-convention */
export function assertNever<_T extends never>() {}
