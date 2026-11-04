// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Child module version set type
// summary: Defines VersionSet, a descending-sorted set of available child module versions used across the child module code.
// ---

#ifndef CHROME_BROWSER_CHILD_MODULE_VERSION_SET_H_
#define CHROME_BROWSER_CHILD_MODULE_VERSION_SET_H_

#include <functional>

#include "base/containers/flat_set.h"
#include "base/version.h"

namespace child_module {

// Set of available child module versions sorted descending (highest first).
using VersionSet = base::flat_set<base::Version, std::greater<>>;

}  // namespace child_module

#endif  // CHROME_BROWSER_CHILD_MODULE_VERSION_SET_H_
