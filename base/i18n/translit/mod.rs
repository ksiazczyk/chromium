// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Translit module root re-exporting transliterator functions
// summary: Declares the custom_transliterator submodule and re-exports its make_transliterator_from_locale and make_transliterator_from_rules functions for public use.
// ---

mod custom_transliterator;

pub use custom_transliterator::make_transliterator_from_locale;
pub use custom_transliterator::make_transliterator_from_rules;
