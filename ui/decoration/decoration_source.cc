// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DecorationSource base implementation
// summary: Implements the DecorationSource constructor, destructor, and the NotifyDecorationChanged callback used to signal decoration detail changes.
// ---

#include "ui/decoration/decoration_source.h"

namespace ui::decoration {

DecorationSource::DecorationSource() = default;

DecorationSource::~DecorationSource() = default;

void DecorationSource::NotifyDecorationChanged(
    std::optional<base::TimeDelta> cross_fade_duration) {
  if (on_details_changed_callback_) {
    on_details_changed_callback_.Run(cross_fade_duration);
  }
}

}  // namespace ui::decoration
