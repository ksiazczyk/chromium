// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: LanguageCodeLocator interface
// summary: Defines the abstract interface for mapping a latitude and longitude coordinate to a list of suitable language codes.
// ---

#ifndef COMPONENTS_LANGUAGE_CONTENT_BROWSER_LANGUAGE_CODE_LOCATOR_H_
#define COMPONENTS_LANGUAGE_CONTENT_BROWSER_LANGUAGE_CODE_LOCATOR_H_

#include <string>
#include <vector>

namespace language {

class LanguageCodeLocator {
 public:
  virtual ~LanguageCodeLocator() = default;
  // Get suitable language codes given a coordinate.
  // If the latitude, longitude pair is not found, will return an empty vector.
  virtual std::vector<std::string> GetLanguageCodes(double latitude,
                                                    double longitude) const = 0;
};

}  // namespace language

#endif  // COMPONENTS_LANGUAGE_CONTENT_BROWSER_LANGUAGE_CODE_LOCATOR_H_
