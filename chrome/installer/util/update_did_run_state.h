// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Update did run state header
// summary: Declares the installer function that updates Chrome's 'did run' state to true in the registry.
// ---

#ifndef CHROME_INSTALLER_UTIL_UPDATE_DID_RUN_STATE_H_
#define CHROME_INSTALLER_UTIL_UPDATE_DID_RUN_STATE_H_

namespace installer {

// Updates Chrome's "did run" state to "true".
void UpdateDidRunState();

}  // namespace installer

#endif  // CHROME_INSTALLER_UTIL_UPDATE_DID_RUN_STATE_H_
