// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Smart card context factory accessor declaration
// summary: Declares the GetSmartCardContextFactory function that yields a SmartCardContextFactory mojo remote for a given browser context.
// ---

#ifndef CHROME_BROWSER_SMART_CARD_GET_SMART_CARD_CONTEXT_FACTORY_H_
#define CHROME_BROWSER_SMART_CARD_GET_SMART_CARD_CONTEXT_FACTORY_H_

#include "mojo/public/cpp/bindings/pending_remote.h"
#include "services/device/public/mojom/smart_card.mojom-forward.h"

namespace content {
class BrowserContext;
}

mojo::PendingRemote<device::mojom::SmartCardContextFactory>
GetSmartCardContextFactory(content::BrowserContext& browser_context);

#endif  // CHROME_BROWSER_SMART_CARD_GET_SMART_CARD_CONTEXT_FACTORY_H_
