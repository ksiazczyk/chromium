// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock New Tab Footer document implementation
// summary: Implements the mock NewTabFooterDocument that binds a Mojo receiver and flushes it for testing.
// ---

#include "chrome/browser/ui/webui/new_tab_footer/mock_new_tab_footer_document.h"

#include "mojo/public/cpp/bindings/pending_remote.h"
#include "mojo/public/cpp/bindings/receiver.h"

MockNewTabFooterDocument::MockNewTabFooterDocument() = default;

MockNewTabFooterDocument::~MockNewTabFooterDocument() = default;

mojo::PendingRemote<new_tab_footer::mojom::NewTabFooterDocument>
MockNewTabFooterDocument::BindAndGetRemote() {
  CHECK(!receiver_.is_bound(), base::NotFatalUntil::M162);
  return receiver_.BindNewPipeAndPassRemote();
}

void MockNewTabFooterDocument::FlushForTesting() {
  receiver_.FlushForTesting();
}
