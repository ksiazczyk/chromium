// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fuzzer for autocomplete attribute parsing
// summary: Fuzzes ParseAutocompleteAttribute with random inputs to uncover crashes in autocomplete attribute parsing.
// ---

#include <stdint.h>

#include <string>
#include <tuple>

#include <fuzzer/FuzzedDataProvider.h>

#include "components/autofill/core/common/autocomplete_parsing_util.h"

extern "C" int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size) {
  FuzzedDataProvider provider(data, size);

  const std::string autocomplete_attribute =
      provider.ConsumeRandomLengthString();
  std::ignore = autofill::ParseAutocompleteAttribute(autocomplete_attribute);

  return 0;
}
