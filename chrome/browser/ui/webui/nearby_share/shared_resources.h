// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Nearby Share shared string resources header
// summary: Declares RegisterNearbySharedStrings, which adds the shared localized strings to a WebUI data source.
// ---

#ifndef CHROME_BROWSER_UI_WEBUI_NEARBY_SHARE_SHARED_RESOURCES_H_
#define CHROME_BROWSER_UI_WEBUI_NEARBY_SHARE_SHARED_RESOURCES_H_

#include "content/public/browser/web_ui_data_source.h"

void RegisterNearbySharedStrings(content::WebUIDataSource* data_source);

#endif  // CHROME_BROWSER_UI_WEBUI_NEARBY_SHARE_SHARED_RESOURCES_H_
