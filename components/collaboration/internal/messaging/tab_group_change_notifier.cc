// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab group change notifier base
// summary: Defines the destructor of the TabGroupChangeNotifier interface that translates tab group sync events into simplified change deltas.
// ---

#include "components/collaboration/internal/messaging/tab_group_change_notifier.h"

namespace collaboration::messaging {

TabGroupChangeNotifier::~TabGroupChangeNotifier() = default;

}  // namespace collaboration::messaging
