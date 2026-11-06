// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AppView API constants implementation
// summary: Defines string constants for the AppView API, including the embedder API namespace and parameter names for creation and events.
// ---

#include "extensions/browser/guest_view/app_view/app_view_constants.h"

namespace appview {

// API namespace for the embedder.
const char kEmbedderAPINamespace[] = "appViewEmbedderInternal";

// Create parameters.
const char kAppID[] = "appId";
const char kData[] = "data";

// Parameters/properties on events.
const char kEmbedderID[] ="embedderId";
const char kGuestInstanceID[] = "guestInstanceId";

}  // namespace appview
