// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

//! Crate root for all base Rust unit tests.

// ---docerion
// type: test
// title: Crate root for base Rust unit tests
// summary: Declares the Rust unit test modules for base, covering sequenced task runners, file paths, command line, and histograms.
// ---

#[path = "task/sequenced_task_runner_unittest.rs"]
mod sequenced_task_runner_unittest;

#[path = "files/file_path_unittest.rs"]
mod file_path_unittest;

#[path = "command_line_unittest.rs"]
mod command_line_unittest;

#[path = "metrics/histogram_unittest.rs"]
mod histogram_unittest;
