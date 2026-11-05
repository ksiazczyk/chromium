// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: InstalledAndCriticalVersion value type implementation
// summary: Implements the InstalledAndCriticalVersion struct that carries the installed browser version and an optional critical update version.
// ---

#include "chrome/browser/upgrade_detector/get_installed_version.h"

#include <utility>

InstalledAndCriticalVersion::InstalledAndCriticalVersion(
    base::Version the_installed_version)
    : installed_version(std::move(the_installed_version)) {}

InstalledAndCriticalVersion::InstalledAndCriticalVersion(
    base::Version the_installed_version,
    base::Version the_critical_version)
    : installed_version(std::move(the_installed_version)),
      critical_version(std::move(the_critical_version)) {}

InstalledAndCriticalVersion::InstalledAndCriticalVersion(
    InstalledAndCriticalVersion&& other) noexcept
    : installed_version(std::move(other.installed_version)),
      critical_version(std::move(other.critical_version)) {}

InstalledAndCriticalVersion::~InstalledAndCriticalVersion() = default;
