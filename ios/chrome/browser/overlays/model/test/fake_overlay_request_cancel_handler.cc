// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Implementation of the fake overlay request cancel handler
// summary: Implements FakeOverlayRequestCancelHandler, whose TriggerCancellation method cancels the associated overlay request in tests.
// ---

#include "ios/chrome/browser/overlays/model/test/fake_overlay_request_cancel_handler.h"

FakeOverlayRequestCancelHandler::FakeOverlayRequestCancelHandler(
    OverlayRequest* request,
    OverlayRequestQueue* queue)
    : OverlayRequestCancelHandler(request, queue) {}

FakeOverlayRequestCancelHandler::~FakeOverlayRequestCancelHandler() = default;

void FakeOverlayRequestCancelHandler::TriggerCancellation() {
  CancelRequest();
}
