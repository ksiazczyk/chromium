// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Large icon service getter implementation
// summary: Implements a process-wide callback holder that stores an embedder-provided getter and returns the LargeIconService for a given BrowserContext.
// ---

#include "components/favicon/content/large_icon_service_getter.h"

#include "base/no_destructor.h"

namespace favicon {

namespace {

LargeIconServiceGetter* GetGetter() {
  static base::NoDestructor<LargeIconServiceGetter> getter;
  return getter.get();
}

}  // namespace

void SetLargeIconServiceGetter(const LargeIconServiceGetter& getter) {
  *GetGetter() = getter;
}

// static
LargeIconService* GetLargeIconService(content::BrowserContext* context) {
  return GetGetter()->Run(context);
}

}  // namespace favicon
