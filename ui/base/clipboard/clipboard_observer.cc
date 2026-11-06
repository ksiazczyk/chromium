// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Clipboard observer implementation
// summary: Implements the default no-op clipboard change and read notification methods of the ClipboardObserver class.
// ---

#include "ui/base/clipboard/clipboard_observer.h"

namespace ui {

void ClipboardObserver::OnClipboardDataChanged() {}

#if BUILDFLAG(IS_CHROMEOS)
void ClipboardObserver::OnClipboardDataRead() {}
#endif

ClipboardObserver::~ClipboardObserver() = default;

}  // namespace ui
