// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Stub PlatformEventSource default factory
// summary: Provides a stub CreateDefault() implementation that returns nullptr for platforms without a platform event source.
// ---

#include "ui/events/platform/platform_event_source.h"

namespace ui {

std::unique_ptr<PlatformEventSource> PlatformEventSource::CreateDefault() {
  return nullptr;
}

}  // namespace ui
