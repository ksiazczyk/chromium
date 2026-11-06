// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: VFS client identifier enum
// summary: Defines the Client enum naming sandboxed file set users such as code and shader caches, used for metrics reporting.
// ---

#ifndef COMPONENTS_SQLITE_VFS_CLIENT_H_
#define COMPONENTS_SQLITE_VFS_CLIENT_H_

namespace sqlite_vfs {

// An identifier of the client of a sandboxed SQLite file set that is used for
// metrics reporting.
// LINT.IfChange(VfsClient)
enum class Client {
  kCodeCache,
  kShaderCache,
  kSharedCacheIsolated,
  kTest,
};
// LINT.ThenChange(//tools/metrics/histograms/metadata/persistent_cache/histograms.xml:VfsClient)

}  // namespace sqlite_vfs

#endif  // COMPONENTS_SQLITE_VFS_CLIENT_H_
