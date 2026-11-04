// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Address bubbles icon controller implementation
// summary: Implements the factory that returns the address bubbles controller as the page action icon controller for a WebContents.
// ---

#include "chrome/browser/ui/autofill/address_bubbles_icon_controller.h"

#include "chrome/browser/ui/autofill/address_bubbles_controller.h"

namespace autofill {

// static
AddressBubblesIconController* AddressBubblesIconController::Get(
    content::WebContents* web_contents) {
  if (!web_contents) {
    return nullptr;
  }

  return AddressBubblesController::FromWebContents(web_contents);
}

}  // namespace autofill
