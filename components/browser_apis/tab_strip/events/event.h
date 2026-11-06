// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab strip event variant type
// summary: Defines the Event variant alias covering tab strip API events such as tabs created, nodes closed, node moved, data changed, and collection created.
// ---

#ifndef COMPONENTS_BROWSER_APIS_TAB_STRIP_EVENTS_EVENT_H_
#define COMPONENTS_BROWSER_APIS_TAB_STRIP_EVENTS_EVENT_H_

#include <variant>

#include "components/browser_apis/tab_strip/tab_strip_api_events.mojom.h"

namespace tabs_api::events {

using Event = std::variant<mojom::OnTabsCreatedEventPtr,
                           mojom::OnNodesClosedEventPtr,
                           mojom::OnNodeMovedEventPtr,
                           mojom::OnDataChangedEventPtr,
                           mojom::OnCollectionCreatedEventPtr>;
}

#endif  // COMPONENTS_BROWSER_APIS_TAB_STRIP_EVENTS_EVENT_H_
