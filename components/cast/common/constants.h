// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Declaration of the frozen CR key value constant
// summary: Declares the chromecast constant kFrozenCrKeyValue and points to an internal bug reference for details.
// ---

#ifndef COMPONENTS_CAST_COMMON_CONSTANTS_H_
#define COMPONENTS_CAST_COMMON_CONSTANTS_H_

namespace chromecast {

// See internal b/187823385 for details.
extern const char kFrozenCrKeyValue[];

}  // namespace chromecast

#endif  // COMPONENTS_CAST_COMMON_CONSTANTS_H_
