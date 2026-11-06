// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CastWebView receiver binding helper
// summary: Implements CastWebView::BindReceivers, binding the CastWebContents and CastContentWindow mojo receivers for a web view.
// ---

#include "chromecast/browser/cast_web_view.h"

namespace chromecast {

void CastWebView::BindReceivers(
    mojo::PendingReceiver<mojom::CastWebContents> web_contents_receiver,
    mojo::PendingReceiver<mojom::CastContentWindow> window_receiver) {
  cast_web_contents()->BindOwnerReceiver(std::move(web_contents_receiver));
  window()->BindReceiver(std::move(window_receiver));
}

}  // namespace chromecast
