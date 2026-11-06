// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mac initialization header
// summary: Declares InitializeMac, the entry point for performing required Mac-specific startup initialization.
// ---

#ifndef CONTENT_APP_MAC_INIT_H_
#define CONTENT_APP_MAC_INIT_H_

namespace content {

// Perform any necessary Mac initialization.
void InitializeMac();

}  // namespace content

#endif  // CONTENT_APP_MAC_INIT_H_
