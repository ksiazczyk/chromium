// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Compile-time guard for supervised users build flag
// summary: Header that raises a compile-time error when supervised user source files are included without the ENABLE_SUPERVISED_USERS build flag enabled.
// ---

#ifndef COMPONENTS_SUPERVISED_USER_CORE_COMMON_SUPERVISED_USERS_H_
#define COMPONENTS_SUPERVISED_USER_CORE_COMMON_SUPERVISED_USERS_H_

#include "components/supervised_user/core/common/buildflags.h"

// Compile-time check to make sure that we don't include supervised user source
// files when ENABLE_SUPERVISED_USERS is not defined.
#if !BUILDFLAG(ENABLE_SUPERVISED_USERS)
#error "Supervised users aren't enabled."
#endif

#endif  // COMPONENTS_SUPERVISED_USER_CORE_COMMON_SUPERVISED_USERS_H_
