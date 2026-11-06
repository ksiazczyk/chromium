// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Icon decoder base class
// summary: Implements the DecodingData constructor for the IconDecoder that decodes icons in batches.
// ---

#include "chromeos/ash/components/phonehub/icon_decoder_impl.h"

namespace ash::phonehub {

IconDecoder::DecodingData::DecodingData(unsigned long id,
                                        const std::string& input_data)
    : id(id), input_data(input_data) {}

}  // namespace ash::phonehub
