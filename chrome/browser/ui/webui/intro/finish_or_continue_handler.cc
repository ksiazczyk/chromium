// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Implementation of the finish or continue page handler
// summary: Implements the browser-side Mojo handler that forwards the user's start browsing or continue education choice to a callback.
// ---

#include "chrome/browser/ui/webui/intro/finish_or_continue_handler.h"

#include "base/check.h"

FinishOrContinueHandler::FinishOrContinueHandler(
    FinishOrContinueCallback callback,
    mojo::PendingReceiver<intro::mojom::FinishOrContinuePageHandler> receiver)
    : callback_(std::move(callback)), receiver_(this, std::move(receiver)) {
  CHECK(callback_);
}

FinishOrContinueHandler::~FinishOrContinueHandler() = default;

void FinishOrContinueHandler::StartBrowsing() {
  HandleChoice(FinishOrContinueChoice::kStartBrowsing);
}

void FinishOrContinueHandler::ContinueEducation() {
  HandleChoice(FinishOrContinueChoice::kContinueEducation);
}

void FinishOrContinueHandler::HandleChoice(FinishOrContinueChoice choice) {
  if (callback_) {
    std::move(callback_).Run(choice);
  }
}
