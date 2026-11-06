// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fusebox action Mojo enum traits header
// summary: Declares the Mojo EnumTraits specialization for converting omnibox SuggestInventory protobuf values to fusebox_action Mojo enums.
// ---

#ifndef COMPONENTS_OMNIBOX_BROWSER_FUSEBOX_ACTION_MOJOM_TRAITS_H_
#define COMPONENTS_OMNIBOX_BROWSER_FUSEBOX_ACTION_MOJOM_TRAITS_H_

#include <optional>

#include "components/omnibox/browser/fusebox_action.mojom-shared.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "third_party/omnibox_proto/suggest_inventory.pb.h"

namespace mojo {

template <>
struct EnumTraits<fusebox_action::mojom::SuggestInventory,
                  omnibox::SuggestInventory> {
  static fusebox_action::mojom::SuggestInventory ToMojom(
      omnibox::SuggestInventory input);
  static std::optional<omnibox::SuggestInventory> FromMojom(
      fusebox_action::mojom::SuggestInventory input);
};

}  // namespace mojo

#endif  // COMPONENTS_OMNIBOX_BROWSER_FUSEBOX_ACTION_MOJOM_TRAITS_H_
