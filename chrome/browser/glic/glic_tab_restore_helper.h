// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Glic tab restore helper header
// summary: Declares functions that populate a tab's extra data map with Glic state and restore that state onto a WebContents after tab restore.
// ---

#ifndef CHROME_BROWSER_GLIC_GLIC_TAB_RESTORE_HELPER_H_
#define CHROME_BROWSER_GLIC_GLIC_TAB_RESTORE_HELPER_H_

#include <map>
#include <string>

namespace tabs {
class TabInterface;
}

namespace content {
class WebContents;
}

namespace glic {

// Checks the tab for Glic state and populates the extra_data map.
void PopulateGlicExtraData(tabs::TabInterface* tab,
                           std::map<std::string, std::string>* extra_data);

// Checks the extra_data map for Glic state and attaches it to the WebContents
// if present, so it can be picked up later by the TabStripModel observer.
void RestoreGlicStateFromExtraData(
    content::WebContents* web_contents,
    const std::map<std::string, std::string>& extra_data);

}  // namespace glic

#endif  // CHROME_BROWSER_GLIC_GLIC_TAB_RESTORE_HELPER_H_
