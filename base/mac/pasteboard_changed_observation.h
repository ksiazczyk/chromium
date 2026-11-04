// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: 'pasteboard_changed_observation.h: pasteboard callback API'
// summary: Declares RegisterPasteboardChangedCallback, which invokes a callback on the main thread whenever the general pasteboard changes.
// ---

#ifndef BASE_MAC_PASTEBOARD_CHANGED_OBSERVATION_H_
#define BASE_MAC_PASTEBOARD_CHANGED_OBSERVATION_H_

#include "base/base_export.h"
#include "base/callback_list.h"
#include "base/functional/callback_forward.h"

namespace base {

// Registers a callback that will be called whenever the
// NSPasteboard.generalPasteboard has been changed by any process on the system
// (including this one).
//
// This registration call must be made on the main thread, and the callback will
// be done on the main thread.
BASE_EXPORT CallbackListSubscription
RegisterPasteboardChangedCallback(RepeatingClosure callback);

}  // namespace base

#endif  // BASE_MAC_PASTEBOARD_CHANGED_OBSERVATION_H_
