// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BackendType enum header
// summary: Defines the BackendType enum for persistent cache backends, currently listing SQLite as the only supported implementation.
// ---

#ifndef COMPONENTS_PERSISTENT_CACHE_BACKEND_TYPE_H_
#define COMPONENTS_PERSISTENT_CACHE_BACKEND_TYPE_H_

namespace persistent_cache {

enum class BackendType { kSqlite };

}  // namespace persistent_cache

#endif  // COMPONENTS_PERSISTENT_CACHE_BACKEND_TYPE_H_
