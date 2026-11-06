// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Command-line switch for insecure content in the Cast Web Runtime
// summary: Declares the allow-running-insecure-content switch that lets the Cast Web Runtime serve content from HTTP sources.
// ---

#ifndef CHROMECAST_CAST_CORE_RUNTIME_BROWSER_CAST_CORE_SWITCHES_H_
#define CHROMECAST_CAST_CORE_RUNTIME_BROWSER_CAST_CORE_SWITCHES_H_

namespace chromecast {

// Enables insecure content in Cast Web Runtime. This unblocks MSPs that serve
// content from HTTP sources, like Amazon Prime.
constexpr char kAllowRunningInsecureContentInRuntime[] =
    "allow-running-insecure-content";

}  // namespace chromecast

#endif  // CHROMECAST_CAST_CORE_RUNTIME_BROWSER_CAST_CORE_SWITCHES_H_
