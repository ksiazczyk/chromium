// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: LevelDB proto feature list declarations
// summary: Declares the leveldb_proto feature flags for shared database migration and asynchronous writes for export from the component.
// ---

#ifndef COMPONENTS_LEVELDB_PROTO_INTERNAL_LEVELDB_PROTO_FEATURE_LIST_H_
#define COMPONENTS_LEVELDB_PROTO_INTERNAL_LEVELDB_PROTO_FEATURE_LIST_H_

#include "base/component_export.h"
#include "base/feature_list.h"

namespace leveldb_proto {

COMPONENT_EXPORT(LEVELDB_PROTO) BASE_DECLARE_FEATURE(kProtoDBSharedMigration);

COMPONENT_EXPORT(LEVELDB_PROTO) BASE_DECLARE_FEATURE(kLevelDBProtoAsyncWrite);

}  // namespace leveldb_proto

#endif  // COMPONENTS_LEVELDB_PROTO_INTERNAL_LEVELDB_PROTO_FEATURE_LIST_H_
