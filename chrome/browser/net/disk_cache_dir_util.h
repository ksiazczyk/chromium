// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Disk cache directory utility header
// summary: Declares GetDiskCacheDir, a helper that returns the managed disk cache directory from local state preferences or an empty path when the setting is invalid.
// ---

#ifndef CHROME_BROWSER_NET_DISK_CACHE_DIR_UTIL_H_
#define CHROME_BROWSER_NET_DISK_CACHE_DIR_UTIL_H_

namespace base {
class FilePath;
}  // namespace base

class PrefService;

namespace chrome_browser_net {

// Returns the disk cache directory configured via `prefs::kDiskCacheDir` in
// `local_state` (with trailing separators stripped) if it is set by policy or
// command-line switch (not user-controlled) and is an absolute path without
// parent references. Returns an empty path otherwise.
base::FilePath GetDiskCacheDir(const PrefService* local_state);

}  // namespace chrome_browser_net

#endif  // CHROME_BROWSER_NET_DISK_CACHE_DIR_UTIL_H_
