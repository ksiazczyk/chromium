// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: RulesetFormat enum of supported formats
// summary: Enumerates the supported ruleset serialization formats and declares the ParseFlag helper for parsing format names.
// ---

#ifndef COMPONENTS_SUBRESOURCE_FILTER_TOOLS_RULESET_CONVERTER_RULESET_FORMAT_H_
#define COMPONENTS_SUBRESOURCE_FILTER_TOOLS_RULESET_CONVERTER_RULESET_FORMAT_H_

#include <string>

namespace subresource_filter {

// Enumerates supported ruleset serialization formats.
enum class RulesetFormat {
  // The format is not defined.
  kUndefined,
  // Text representation of FilterList rules. See
  // //components/subresource_filter/tools/rule_parser
  // for details.
  kFilterList,
  // A serialized url_pattern_index::proto::FilteringRules message.
  kProto,
  // UnindexedRuleset format. See
  // //components/subresource_filter/core/common/unindexed_ruleset.* for
  // details.
  kUnindexedRuleset,
};

RulesetFormat ParseFlag(const std::string& text);

}  // namespace subresource_filter

#endif  // COMPONENTS_SUBRESOURCE_FILTER_TOOLS_RULESET_CONVERTER_RULESET_FORMAT_H_
