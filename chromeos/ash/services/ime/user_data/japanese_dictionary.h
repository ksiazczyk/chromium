// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Japanese dictionary conversion header
// summary: Declares functions that convert Japanese dictionary entries between the proto and mojom representations used by the ChromeOS IME service.
// ---

#ifndef CHROMEOS_ASH_SERVICES_IME_USER_DATA_JAPANESE_DICTIONARY_H_
#define CHROMEOS_ASH_SERVICES_IME_USER_DATA_JAPANESE_DICTIONARY_H_

#include "chromeos/ash/services/ime/public/cpp/shared_lib/proto/japanese_dictionary.pb.h"
#include "chromeos/ash/services/ime/public/mojom/user_data_japanese_dictionary.mojom.h"

namespace ash::ime {

mojom::JapaneseDictionaryPtr MakeMojomJapaneseDictionary(
    chromeos_input::JapaneseDictionary proto_response);

chromeos_input::JapaneseDictionary::Entry MakeProtoJpDictEntry(
    const mojom::JapaneseDictionaryEntry& mojom_entry);

}  // namespace ash::ime

#endif  // CHROMEOS_ASH_SERVICES_IME_USER_DATA_JAPANESE_DICTIONARY_H_
