// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HistoryClustersUtil header
// summary: Declares the HistoryClustersUtil class with its PopulateSource method and the WebUI string keys for history clusters visibility and renaming.
// ---

#ifndef CHROME_BROWSER_UI_WEBUI_CR_COMPONENTS_HISTORY_CLUSTERS_HISTORY_CLUSTERS_UTIL_H_
#define CHROME_BROWSER_UI_WEBUI_CR_COMPONENTS_HISTORY_CLUSTERS_HISTORY_CLUSTERS_UTIL_H_

inline constexpr char kIsHistoryClustersVisibleKey[] =
    "isHistoryClustersVisible";
inline constexpr char kRenameJourneysKey[] = "renameJourneys";

class Profile;

namespace content {
class WebUIDataSource;
}

class HistoryClustersUtil {
 public:
  static void PopulateSource(content::WebUIDataSource* source,
                             Profile* profile,
                             bool in_side_panel);
};

#endif  // CHROME_BROWSER_UI_WEBUI_CR_COMPONENTS_HISTORY_CLUSTERS_HISTORY_CLUSTERS_UTIL_H_
