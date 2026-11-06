// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock CastWebView implementation
// summary: Implements mock CastWebView and CastWebContents stubs that return null views and bind Mojo receivers for use in Cast browser tests.
// ---

#include "chromecast/browser/test/mock_cast_web_view.h"

namespace chromecast {

MockCastWebContents::MockCastWebContents() {}

MockCastWebContents::~MockCastWebContents() = default;

bool MockCastWebContents::TryBindReceiver(mojo::GenericPendingReceiver&) {
  return false;
}

MockCastWebView::MockCastWebView()
    : mock_cast_web_contents_(std::make_unique<MockCastWebContents>()),
      cast_web_contents_receiver_(mock_cast_web_contents_.get()) {}

MockCastWebView::~MockCastWebView() = default;

CastContentWindow* MockCastWebView::window() const {
  return nullptr;
}

content::WebContents* MockCastWebView::web_contents() const {
  return nullptr;
}

CastWebContents* MockCastWebView::cast_web_contents() {
  return mock_cast_web_contents_.get();
}

base::TimeDelta MockCastWebView::shutdown_delay() const {
  return base::TimeDelta();
}

void MockCastWebView::OwnerDestroyed() {}

void MockCastWebView::Bind(
    mojo::PendingReceiver<mojom::CastWebContents> receiver) {
  cast_web_contents_receiver_.Bind(std::move(receiver));
}

}  // namespace chromecast
