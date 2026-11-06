// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Presentation connection message observer implementation
// summary: Registers and unregisters a presentation connection message observer with the media router for a given route.
// ---

#include "components/media_router/browser/presentation_connection_message_observer.h"

#include "components/media_router/browser/media_router.h"

namespace media_router {

PresentationConnectionMessageObserver::PresentationConnectionMessageObserver(
    MediaRouter* router,
    const MediaRoute::Id& route_id)
    : router_(router), route_id_(route_id) {
  DCHECK(router_);
  DCHECK(!route_id_.empty());
  router_->RegisterPresentationConnectionMessageObserver(this);
}

PresentationConnectionMessageObserver::
    ~PresentationConnectionMessageObserver() {
  router_->UnregisterPresentationConnectionMessageObserver(this);
}

}  // namespace media_router
