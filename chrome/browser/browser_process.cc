// Copyright 2009 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BrowserProcess global pointer
// summary: Defines the g_browser_process global pointer plus the default BrowserProcess constructor and destructor.
// ---

#include "chrome/browser/browser_process.h"

BrowserProcess* g_browser_process = nullptr;

BrowserProcess::BrowserProcess() = default;

BrowserProcess::~BrowserProcess() = default;
