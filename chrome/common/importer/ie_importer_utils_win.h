// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Windows IE importer registry key helpers header
// summary: Declares importer namespace functions that provide the registry keys for IE favorites order and settings, overridable by tests.
// ---

#ifndef CHROME_COMMON_IMPORTER_IE_IMPORTER_UTILS_WIN_H_
#define CHROME_COMMON_IMPORTER_IE_IMPORTER_UTILS_WIN_H_

#include <string>

namespace importer {

// Returns the key to be used in HKCU to look for IE's favorites order blob.
// Overridable by tests via ImporterTestRegistryOverrider.
std::wstring GetIEFavoritesOrderKey();

// Returns the key to be used in HKCU to look for IE settings.
// Overridable by tests via ImporterTestRegistryOverrider.
std::wstring GetIESettingsKey();

}  // namespace importer

#endif  // CHROME_COMMON_IMPORTER_IE_IMPORTER_UTILS_WIN_H_
