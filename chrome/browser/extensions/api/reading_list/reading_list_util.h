// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ReadingList entry conversion utility header
// summary: Declares ParseEntry, a helper in the extensions reading_list_util namespace that converts a core ReadingListEntry into the API ReadingListEntry type.
// ---

#ifndef CHROME_BROWSER_EXTENSIONS_API_READING_LIST_READING_LIST_UTIL_H_
#define CHROME_BROWSER_EXTENSIONS_API_READING_LIST_READING_LIST_UTIL_H_

#include "chrome/common/extensions/api/reading_list.h"
#include "components/reading_list/core/reading_list_entry.h"
#include "extensions/buildflags/buildflags.h"

static_assert(BUILDFLAG(ENABLE_EXTENSIONS_CORE));

namespace extensions::reading_list_util {

// Converts from ReadingListEntry to api::reading_list::ReadingListEntry.
api::reading_list::ReadingListEntry ParseEntry(const ReadingListEntry& entry);

}  // namespace extensions::reading_list_util

#endif  // CHROME_BROWSER_EXTENSIONS_API_READING_LIST_READING_LIST_UTIL_H_
