// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Zucchini fuzzer utility header
// summary: Declares ReadAndWriteReferences, a helper that uses a disassembler to read all references from mutable data and write them back, shared by Zucchini fuzzers.
// ---

#ifndef COMPONENTS_ZUCCHINI_FUZZERS_FUZZ_UTILS_H_
#define COMPONENTS_ZUCCHINI_FUZZERS_FUZZ_UTILS_H_

#include <stdint.h>

#include <memory>
#include <vector>

#include "components/zucchini/disassembler.h"

namespace zucchini {

// Helper function that uses |disassembler| to read all references from
// |mutable_data| and write them back.
void ReadAndWriteReferences(
    std::unique_ptr<zucchini::Disassembler> disassembler,
    std::vector<uint8_t>* mutable_data);

}  // namespace zucchini

#endif  // COMPONENTS_ZUCCHINI_FUZZERS_FUZZ_UTILS_H_
