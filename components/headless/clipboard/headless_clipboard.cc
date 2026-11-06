// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Headless clipboard implementation
// summary: Implements a platform-independent headless clipboard based on ui::ClipboardNonBacked, installs it for the current thread, and counts sequence number requests for tests.
// ---

#include "components/headless/clipboard/headless_clipboard.h"

#include <memory>

#include "ui/base/clipboard/clipboard.h"
#include "ui/base/clipboard/clipboard_buffer.h"
#include "ui/base/clipboard/clipboard_non_backed.h"
#include "ui/base/clipboard/clipboard_sequence_number_token.h"

namespace headless {

namespace {
int g_sequence_number_request_counter_for_testing = 0;
}  // namespace

// Headless clipboard that is independent of any platform clipboard.
// It's required as a friend target for ui::ClipboardNonBacked whose
// ctor and dtor are private.
class HeadlessClipboard : public ui::ClipboardNonBacked {
 public:
  HeadlessClipboard() = default;

  HeadlessClipboard(const HeadlessClipboard&) = delete;
  HeadlessClipboard& operator=(const HeadlessClipboard&) = delete;

  ~HeadlessClipboard() override = default;

 private:
  // ui::ClipboardNonBacked overrides
  const ui::ClipboardSequenceNumberToken& GetSequenceNumber(
      ui::ClipboardBuffer buffer) const override {
    // Count the sequence number requests so that we can verify that the
    // headless keboard is indeed installed in tests.
    ++g_sequence_number_request_counter_for_testing;
    return ui::ClipboardNonBacked::GetSequenceNumber(buffer);
  }
};

void SetHeadlessClipboardForCurrentThread() {
  ui::Clipboard::SetClipboardForCurrentThread(
      std::make_unique<HeadlessClipboard>());
}

int GetSequenceNumberRequestCounterForTesting() {  // IN-TEST
  return g_sequence_number_request_counter_for_testing;
}

}  // namespace headless
