// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Bad pattern finder header
// summary: Declares FindBadPatterns, which detects and reports banned patterns like applying std::make_unique to garbage-collected types.
// ---

#ifndef TOOLS_BLINK_GC_PLUGIN_BAD_PATTERN_FINDER_H_
#define TOOLS_BLINK_GC_PLUGIN_BAD_PATTERN_FINDER_H_

struct BlinkGCPluginOptions;
class DiagnosticsReporter;
class RecordCache;

namespace clang {
class ASTContext;
}  // namespace clang

// Detects and reports use of banned patterns, such as applying
// std::make_unique to a garbage-collected type.
void FindBadPatterns(clang::ASTContext& ast_context,
                     DiagnosticsReporter&,
                     RecordCache& record_cache,
                     const BlinkGCPluginOptions&);

#endif  // TOOLS_BLINK_GC_PLUGIN_BAD_PATTERN_FINDER_H_
