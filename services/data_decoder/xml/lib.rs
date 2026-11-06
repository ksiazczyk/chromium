// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Crate root of the Rust XML parser
// summary: Declares the cxx and parser modules and re-exports the decode_xml_bytes and decode_xml_str entry points of the crate.
// ---

pub mod cxx;
pub mod parser;

pub use parser::{decode_xml_bytes, decode_xml_str};
