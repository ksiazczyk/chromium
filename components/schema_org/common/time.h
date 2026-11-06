// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ISO8601 duration parsing header
// summary: Declares ParseISO8601Duration, which parses ISO8601 duration strings into base::TimeDelta, exported from the schema_org component.
// ---

#ifndef COMPONENTS_SCHEMA_ORG_COMMON_TIME_H_
#define COMPONENTS_SCHEMA_ORG_COMMON_TIME_H_

#include <optional>
#include <string>

#include "base/component_export.h"
#include "base/time/time.h"

namespace schema_org {

// Parses an ISO8601 duration string as defined in
// http://go/rfc/3339#appendix-A. Only parses hours, minutes, and seconds,
// particularly because there is no standard conversion from date units, such as
// a month to a time interval.
COMPONENT_EXPORT(SCHEMA_ORG_COMMON)
std::optional<base::TimeDelta> ParseISO8601Duration(const std::string& str);

}  // namespace schema_org

#endif  // COMPONENTS_SCHEMA_ORG_COMMON_TIME_H_
