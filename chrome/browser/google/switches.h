// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Google Update simulation switch declarations
// summary: Declares the command-line switch constants used to simulate update check errors in the Windows Google Update integration.
// ---

#ifndef CHROME_BROWSER_GOOGLE_SWITCHES_H_
#define CHROME_BROWSER_GOOGLE_SWITCHES_H_

namespace switches {

extern const char kSimulateUpdateHresult[];
extern const char kSimulateUpdateErrorCode[];

}  // namespace switches

#endif  // CHROME_BROWSER_GOOGLE_SWITCHES_H_
