// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ImportProcessingResult implementation
// summary: Implements the default constructors, assignment operators and destructor of the ImportProcessingResult struct.
// ---

#include "components/webauthn/core/browser/import/import_processing_result.h"

namespace webauthn {

ImportProcessingResult::ImportProcessingResult() = default;
ImportProcessingResult::ImportProcessingResult(
    const ImportProcessingResult& other) = default;
ImportProcessingResult& ImportProcessingResult::operator=(
    const ImportProcessingResult& other) = default;
ImportProcessingResult::ImportProcessingResult(ImportProcessingResult&& other) =
    default;
ImportProcessingResult& ImportProcessingResult::operator=(
    ImportProcessingResult&& other) = default;
ImportProcessingResult::~ImportProcessingResult() = default;

}  // namespace webauthn
