// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake ShareHistory implementation for tests
// summary: Implements a test fake of ShareHistory that returns a directly injected flat share history from GetFlatShareHistory().
// ---

#include "chrome/browser/share/fake_share_history.h"

#include "base/functional/bind.h"
#include "base/notimplemented.h"
#include "base/task/sequenced_task_runner.h"

namespace sharing {

FakeShareHistory::FakeShareHistory() = default;
FakeShareHistory::~FakeShareHistory() = default;

void FakeShareHistory::AddShareEntry(const std::string& component_name) {
  NOTIMPLEMENTED();
}

void FakeShareHistory::GetFlatShareHistory(GetFlatHistoryCallback callback,
                                           int window) {
  base::SequencedTaskRunner::GetCurrentDefault()->PostTask(
      FROM_HERE, base::BindOnce(std::move(callback), history_));
}

}  // namespace sharing
