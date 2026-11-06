// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mojo web test helper implementation
// summary: Implements a self-owned Mojo service whose Reverse method returns the reversed input string, used to exercise Mojo from web tests.
// ---

#include "content/web_test/browser/mojo_web_test_helper.h"

#include <memory>
#include <string>
#include <utility>

#include "content/test/data/mojo_web_test_helper.test-mojom.h"
#include "mojo/public/cpp/bindings/pending_receiver.h"
#include "mojo/public/cpp/bindings/self_owned_receiver.h"

namespace content {

MojoWebTestHelper::MojoWebTestHelper() {}

MojoWebTestHelper::~MojoWebTestHelper() {}

// static
void MojoWebTestHelper::Create(
    mojo::PendingReceiver<mojom::MojoWebTestHelper> receiver) {
  mojo::MakeSelfOwnedReceiver(std::make_unique<MojoWebTestHelper>(),
                              std::move(receiver));
}

void MojoWebTestHelper::Reverse(const std::string& message,
                                ReverseCallback callback) {
  std::move(callback).Run(std::string(message.rbegin(), message.rend()));
}

}  // namespace content
