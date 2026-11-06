// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ScopedOleInitializer class declaration
// summary: Declares a scoped helper that initializes OLE on construction and uninitializes it on destruction, with checks that it stays on one thread.
// ---

#ifndef UI_BASE_WIN_SCOPED_OLE_INITIALIZER_H_
#define UI_BASE_WIN_SCOPED_OLE_INITIALIZER_H_

#include "base/component_export.h"
#include "base/threading/thread_checker.h"
#include "base/win/windows_types.h"

namespace ui {

class COMPONENT_EXPORT(UI_BASE) ScopedOleInitializer {
 public:
  ScopedOleInitializer();

  ScopedOleInitializer(const ScopedOleInitializer&) = delete;
  ScopedOleInitializer& operator=(const ScopedOleInitializer&) = delete;

  ~ScopedOleInitializer();

 private:
  THREAD_CHECKER(thread_checker_);
  HRESULT hr_;
};

}  // namespace

#endif  // UI_BASE_WIN_SCOPED_OLE_INITIALIZER_H_
