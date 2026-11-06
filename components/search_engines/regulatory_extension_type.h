// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: RegulatoryExtensionType enum
// summary: Defines an enum class distinguishing default search engine entries from Android EEA regulatory extensions.
// ---

#ifndef COMPONENTS_SEARCH_ENGINES_REGULATORY_EXTENSION_TYPE_H_
#define COMPONENTS_SEARCH_ENGINES_REGULATORY_EXTENSION_TYPE_H_

enum class RegulatoryExtensionType {
  kDefault = 0,
  kAndroidEEA = 1,
  kMaxValue = kAndroidEEA
};

#endif  // COMPONENTS_SEARCH_ENGINES_REGULATORY_EXTENSION_TYPE_H_
