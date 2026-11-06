// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Boca session utility declarations
// summary: Declares null-safe accessor functions for the Boca session config, student groups, student group ID and roster.
// ---

#ifndef CHROMEOS_ASH_COMPONENTS_BOCA_BOCA_SESSION_UTIL_H_
#define CHROMEOS_ASH_COMPONENTS_BOCA_BOCA_SESSION_UTIL_H_

#include <string>

#include "chromeos/ash/components/boca/proto/session.pb.h"

namespace ash::boca {

::boca::SessionConfig GetSessionConfigSafe(::boca::Session* session);

google::protobuf::RepeatedPtrField<::boca::UserIdentity> GetStudentGroupsSafe(
    ::boca::Session* session);

std::string GetStudentGroupIdSafe(::boca::Session* session);

::boca::Roster GetRosterSafe(::boca::Session* session);

}  // namespace ash::boca

#endif  // CHROMEOS_ASH_COMPONENTS_BOCA_BOCA_SESSION_UTIL_H_
