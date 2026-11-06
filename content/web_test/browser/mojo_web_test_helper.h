// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mojo web test helper header
// summary: Declares the MojoWebTestHelper class, a Mojo service that reverses a message string for web test purposes.
// ---

#ifndef CONTENT_WEB_TEST_BROWSER_MOJO_WEB_TEST_HELPER_H_
#define CONTENT_WEB_TEST_BROWSER_MOJO_WEB_TEST_HELPER_H_

#include <string>

#include "content/test/data/mojo_web_test_helper.test-mojom.h"
#include "mojo/public/cpp/bindings/pending_receiver.h"

namespace content {

class MojoWebTestHelper : public mojom::MojoWebTestHelper {
 public:
  MojoWebTestHelper();

  MojoWebTestHelper(const MojoWebTestHelper&) = delete;
  MojoWebTestHelper& operator=(const MojoWebTestHelper&) = delete;

  ~MojoWebTestHelper() override;

  static void Create(mojo::PendingReceiver<mojom::MojoWebTestHelper> receiver);

  // mojom::MojoWebTestHelper:
  void Reverse(const std::string& message, ReverseCallback callback) override;
};

}  // namespace content

#endif  // CONTENT_WEB_TEST_BROWSER_MOJO_WEB_TEST_HELPER_H_
