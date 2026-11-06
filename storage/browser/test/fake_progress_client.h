// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake progress client declaration
// summary: Declares a fake blink::mojom::ProgressClient that tracks total size and call count for verification in tests.
// ---

#ifndef STORAGE_BROWSER_TEST_FAKE_PROGRESS_CLIENT_H_
#define STORAGE_BROWSER_TEST_FAKE_PROGRESS_CLIENT_H_

#include "third_party/blink/public/mojom/blob/blob_registry.mojom.h"

namespace storage {

class FakeProgressClient : public blink::mojom::ProgressClient {
 public:
  void OnProgress(uint64_t delta) override;

  int call_count = 0;
  uint64_t total_size = 0;
};

}  // namespace storage

#endif  // STORAGE_BROWSER_TEST_FAKE_PROGRESS_CLIENT_H_
