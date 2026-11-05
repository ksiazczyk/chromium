// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: History clusters side panel controller implementation
// summary: Implements the Journeys side panel controller that forwards ShowJourneysSidePanel requests to the browser's history clusters coordinator.
// ---

#include "chrome/browser/ui/views/side_panel/history_clusters/history_clusters_side_panel_controller.h"

#include "chrome/browser/ui/browser_window/public/browser_window_features.h"
#include "chrome/browser/ui/browser_window/public/browser_window_interface.h"
#include "chrome/browser/ui/browser_window/public/global_browser_collection.h"
#include "chrome/browser/ui/views/side_panel/history_clusters/history_clusters_side_panel_coordinator.h"

HistoryClustersSidePanelController::HistoryClustersSidePanelController(
    content::WebContents* web_contents)
    : web_contents_(web_contents) {}

HistoryClustersSidePanelController::~HistoryClustersSidePanelController() =
    default;

void HistoryClustersSidePanelController::ShowJourneysSidePanel(
    const std::string& query) {
  if (BrowserWindowInterface* browser =
          GlobalBrowserCollection::GetInstance()->FindBrowserWithTab(
              web_contents_)) {
    auto* coordinator = HistoryClustersSidePanelCoordinator::From(browser);
    coordinator->Show(query);
  }
}
