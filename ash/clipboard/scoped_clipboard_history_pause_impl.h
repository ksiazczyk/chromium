// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ScopedClipboardHistoryPauseImpl class header
// summary: Declares ScopedClipboardHistoryPauseImpl, a scoped pause that controls clipboard history updates and metrics while clipboard data is read or modified.
// relations:
//   - depends_on /ash/ash_export.h
//   - implements /ash/public/cpp/scoped_clipboard_history_pause.h
//   - depends_on /ash/public/cpp/scoped_clipboard_history_pause.h
// ---

#ifndef ASH_CLIPBOARD_SCOPED_CLIPBOARD_HISTORY_PAUSE_IMPL_H_
#define ASH_CLIPBOARD_SCOPED_CLIPBOARD_HISTORY_PAUSE_IMPL_H_

#include "ash/ash_export.h"
#include "ash/public/cpp/scoped_clipboard_history_pause.h"
#include "base/memory/raw_ref.h"
#include "base/memory/weak_ptr.h"
#include "base/token.h"

namespace ash {
class ClipboardHistory;

namespace clipboard_history_util {
enum class PauseBehavior;
}  // namespace clipboard_history_util

// Controls modifications to clipboard history within its lifetime. If clipboard
// data is read or modified within its lifetime, the individual pause's behavior
// dictates whether clipboard history and corresponding metrics will be updated.
class ASH_EXPORT ScopedClipboardHistoryPauseImpl
    : public ScopedClipboardHistoryPause {
 public:
  explicit ScopedClipboardHistoryPauseImpl(ClipboardHistory* clipboard_history);
  ScopedClipboardHistoryPauseImpl(
      ClipboardHistory* clipboard_history,
      clipboard_history_util::PauseBehavior behavior);
  ScopedClipboardHistoryPauseImpl(const ScopedClipboardHistoryPauseImpl&) =
      delete;
  ScopedClipboardHistoryPauseImpl& operator=(
      const ScopedClipboardHistoryPauseImpl&) = delete;
  ~ScopedClipboardHistoryPauseImpl() override;

 private:
  const raw_ref<const base::Token> pause_id_;
  base::WeakPtr<ClipboardHistory> const clipboard_history_;
};

}  // namespace ash

#endif  // ASH_CLIPBOARD_SCOPED_CLIPBOARD_HISTORY_PAUSE_IMPL_H_
