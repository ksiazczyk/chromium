// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Quick Insert clipboard insertion interface
// summary: Declares the InsertClipboardData function that pastes clipboard data into the focused window with an optional web paste step.
// relations:
//   - depends_on /ash/ash_export.h
//   - depends_on /base/functional/callback_forward.h
// ---

#ifndef ASH_QUICK_INSERT_QUICK_INSERT_CLIPBOARD_INSERTION_H_
#define ASH_QUICK_INSERT_QUICK_INSERT_CLIPBOARD_INSERTION_H_

#include <memory>

#include "ash/ash_export.h"
#include "base/functional/callback_forward.h"

namespace ui {
class ClipboardData;
}

namespace ash {

ASH_EXPORT void InsertClipboardData(
    std::unique_ptr<ui::ClipboardData> data,
    base::OnceClosure do_web_paste,
    base::OnceCallback<void(bool)> done_callback);
}

#endif  // ASH_QUICK_INSERT_QUICK_INSERT_CLIPBOARD_INSERTION_H_
