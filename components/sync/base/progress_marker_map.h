// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Progress marker map type definition
// summary: Defines the ProgressMarkerMap alias mapping DataType to serialized progress markers and declares a helper to convert it to a dictionary.
// ---

#ifndef COMPONENTS_SYNC_BASE_PROGRESS_MARKER_MAP_H_
#define COMPONENTS_SYNC_BASE_PROGRESS_MARKER_MAP_H_

#include <map>
#include <memory>
#include <string>

#include "base/values.h"
#include "components/sync/base/data_type.h"

namespace syncer {

// A container that maps DataType to serialized
// DataTypeProgressMarkers.
using ProgressMarkerMap = std::map<DataType, std::string>;

base::DictValue ProgressMarkerMapToValueDict(
    const ProgressMarkerMap& marker_map);

}  // namespace syncer

#endif  // COMPONENTS_SYNC_BASE_PROGRESS_MARKER_MAP_H_
