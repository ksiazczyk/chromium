// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ClipboardChangeNotifier implementation
// summary: Implements the default no-op start and stop notification methods of the ClipboardChangeNotifier class.
// ---

#include "ui/base/clipboard/clipboard_change_notifier.h"

namespace ui {

void ClipboardChangeNotifier::StartNotifying() {}
void ClipboardChangeNotifier::StopNotifying() {}

}  // namespace ui
