// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Overlay response implementation
// summary: Implements the OverlayResponse factory and the internal OverlayResponseImpl class backed by SupportsUserData.
// ---

#include "ios/chrome/browser/overlays/model/overlay_response_impl.h"

// static
std::unique_ptr<OverlayResponse> OverlayResponse::Create() {
  return std::make_unique<OverlayResponseImpl>();
}

OverlayResponseImpl::OverlayResponseImpl() {}
OverlayResponseImpl::~OverlayResponseImpl() {}

base::SupportsUserData* OverlayResponseImpl::data() {
  return this;
}
