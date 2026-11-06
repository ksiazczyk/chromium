// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Google command-line switch declarations
// summary: Declares the switch name constants for the Google base URL override and the ignore-google-port-numbers flag.
// ---

#ifndef COMPONENTS_GOOGLE_CORE_COMMON_GOOGLE_SWITCHES_H_
#define COMPONENTS_GOOGLE_CORE_COMMON_GOOGLE_SWITCHES_H_

namespace switches {

// All switches in alphabetical order. The switches should be documented
// alongside the definition of their values in the .cc file.
extern const char kGoogleBaseURL[];
extern const char kIgnoreGooglePortNumbers[];

}  // namespace switches

#endif  // COMPONENTS_GOOGLE_CORE_COMMON_GOOGLE_SWITCHES_H_
