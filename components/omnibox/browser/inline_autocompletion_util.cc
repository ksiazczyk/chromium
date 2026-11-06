// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Inline autocompletion utility
// summary: Provides FindAtWordbreak, a helper that finds an occurrence of a search string starting at a word boundary within text.
// ---

#include "inline_autocompletion_util.h"

size_t FindAtWordbreak(const std::u16string& text,
                       const std::u16string& search,
                       size_t search_start) {
  std::vector<size_t> word_starts;
  String16VectorFromString16(text, &word_starts);
  size_t next_occurrence = std::string::npos;
  for (auto word_start : word_starts) {
    if (word_start < search_start)
      continue;
    if (next_occurrence != std::string::npos && word_start < next_occurrence)
      continue;
    next_occurrence = text.find(search, word_start);
    if (next_occurrence == std::string::npos)
      break;
    if (word_start == next_occurrence)
      return next_occurrence;
  }
  return std::string::npos;
}
