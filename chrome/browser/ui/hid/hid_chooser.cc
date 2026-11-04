// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HidChooser base implementation
// summary: Implements the HidChooser base class, managing the close closure and weak pointer support for a HID chooser dialog.
// ---

#include "chrome/browser/ui/hid/hid_chooser.h"

HidChooser::HidChooser(base::OnceClosure close_closure)
    : closure_runner_(std::move(close_closure)) {}

HidChooser::~HidChooser() = default;

void HidChooser::SetCloseClosure(base::OnceClosure close_closure) {
  closure_runner_.ReplaceClosure(std::move(close_closure));
}

base::WeakPtr<HidChooser> HidChooser::GetWeakPtr() {
  return weak_factory_.GetWeakPtr();
}
