// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chromecast process type enum
// summary: Defines a ProcessType enum that distinguishes the Cast browser process from the Cast service process.
// ---

#ifndef CHROMECAST_BASE_PROCESS_TYPES_H_
#define CHROMECAST_BASE_PROCESS_TYPES_H_

namespace chromecast {

enum class ProcessType {
  kCastBrowser,
  kCastService,
};

}  // namespace chromecast

#endif  // CHROMECAST_BASE_PROCESS_TYPES_H_
