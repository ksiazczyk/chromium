// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake variations client implementation
// summary: Implements a fake variations client that returns fixed variations headers for use in tests.
// ---

#include "components/contextual_search/fake_variations_client.h"

namespace contextual_search {

bool FakeVariationsClient::IsOffTheRecord() const {
  return false;
}

variations::mojom::VariationsHeadersPtr
FakeVariationsClient::GetVariationsHeaders() const {
  auto variations = variations::mojom::VariationsHeaders::New();
  variations->headers_map.insert(
      {variations::mojom::GoogleWebVisibility::FIRST_PARTY, "header"});
  return variations;
}

}  // namespace contextual_search
