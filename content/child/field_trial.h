// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Field trial initialization declaration
// summary: Declares InitializeFieldTrialAndFeatureList, the entry point for setting up field trials and the feature list in child processes.
// ---

#ifndef CONTENT_CHILD_FIELD_TRIAL_H_
#define CONTENT_CHILD_FIELD_TRIAL_H_

namespace content {
void InitializeFieldTrialAndFeatureList();
}

#endif  // CONTENT_CHILD_FIELD_TRIAL_H_
