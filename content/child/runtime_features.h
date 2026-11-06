// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Runtime features header
// summary: Declares SetRuntimeFeaturesDefaultsAndUpdateFromArgs, the entry point for initializing Blink runtime features from the command line.
// ---

#ifndef CONTENT_CHILD_RUNTIME_FEATURES_H_
#define CONTENT_CHILD_RUNTIME_FEATURES_H_

namespace base {
class CommandLine;
}

namespace content {

void SetRuntimeFeaturesDefaultsAndUpdateFromArgs(
    const base::CommandLine& command_line);

}  // namespace content

#endif  // CONTENT_CHILD_RUNTIME_FEATURES_H_
