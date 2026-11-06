// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Content settings pattern parser interface
// summary: Declares the PatternParser class that converts pattern specifications to pattern parts and back, including a representative URL helper.
// ---

#ifndef COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_CONTENT_SETTINGS_PATTERN_PARSER_H_
#define COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_CONTENT_SETTINGS_PATTERN_PARSER_H_

#include <string>
#include <string_view>

#include "components/content_settings/core/common/content_settings_pattern.h"

class GURL;

namespace content_settings {

class PatternParser {
 public:
  PatternParser() = delete;
  PatternParser(const PatternParser&) = delete;
  PatternParser& operator=(const PatternParser&) = delete;

  static void Parse(std::string_view pattern_spec,
                    ContentSettingsPattern::BuilderInterface* builder);

  static std::string ToString(
      const ContentSettingsPattern::PatternParts& parts);
  static GURL ToRepresentativeUrl(
      const ContentSettingsPattern::PatternParts& parts);
};

}  // namespace content_settings

#endif  // COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_CONTENT_SETTINGS_PATTERN_PARSER_H_
