// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AshWebViewFactoryImpl implementation
// summary: Implements the AshWebViewFactory Create method, returning a new AshWebViewImpl for the given init params.
// ---

#include "chrome/browser/ui/ash/web_view/ash_web_view_factory_impl.h"

#include "chrome/browser/profiles/profile.h"
#include "chrome/browser/ui/ash/web_view/ash_web_view_impl.h"

AshWebViewFactoryImpl::AshWebViewFactoryImpl() = default;
AshWebViewFactoryImpl::~AshWebViewFactoryImpl() = default;

std::unique_ptr<ash::AshWebView> AshWebViewFactoryImpl::Create(
    const ash::AshWebView::InitParams& params) {
  return std::make_unique<AshWebViewImpl>(params);
}
