// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Platform handler re-export entry point
// summary: Re-exports the PlatformHandler from the swa subdirectory as the single direct import point for platform implementations, and is swapped out by dev.py during local development.
// ---

// This file is replaced in dev.py when in local dev, and should be the only
// place that directly import the PlatformHandler from subdirectory.
//
// Note that most user should import core/platform_handler.ts instead, and this
// should only be directly imported by init.ts, or other files that need to
// call static methods on the class (currently only core/i18n.ts).
export {PlatformHandler} from './swa/handler.js';
