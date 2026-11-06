// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Module worker imported message script
// summary: ES module imported by module workers in DevTools tests that exports a message constant set to 'imported'.
// ---

export const message = "imported";