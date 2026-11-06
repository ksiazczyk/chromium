// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PDF SDK initialization state
// summary: Tracks and exposes whether the PDF SDK was initialized via the plugin using a simple global flag.
// ---

#include "pdf/pdf_init.h"

namespace chrome_pdf {

namespace {

bool g_sdk_initialized_via_plugin = false;

}  // namespace

bool IsSDKInitializedViaPlugin() {
  return g_sdk_initialized_via_plugin;
}

void SetIsSDKInitializedViaPlugin(bool initialized_via_plugin) {
  g_sdk_initialized_via_plugin = initialized_via_plugin;
}

}  // namespace chrome_pdf
