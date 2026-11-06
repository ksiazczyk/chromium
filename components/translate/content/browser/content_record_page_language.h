// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header for page language storage helpers
// summary: Declares functions to get and set the page language stored in a content NavigationEntry.
// ---

#ifndef COMPONENTS_TRANSLATE_CONTENT_BROWSER_CONTENT_RECORD_PAGE_LANGUAGE_H_
#define COMPONENTS_TRANSLATE_CONTENT_BROWSER_CONTENT_RECORD_PAGE_LANGUAGE_H_

#include <string>
#include <string_view>

namespace content {
class NavigationEntry;
}

namespace translate {

// Helper functions for storing/getting page language in a NavigationEntry.
std::string GetPageLanguageFromNavigation(content::NavigationEntry* entry);

void SetPageLanguageInNavigation(std::string_view page_language,
                                 content::NavigationEntry* entry);

}  // namespace translate

#endif  // COMPONENTS_TRANSLATE_CONTENT_BROWSER_CONTENT_RECORD_PAGE_LANGUAGE_H_
