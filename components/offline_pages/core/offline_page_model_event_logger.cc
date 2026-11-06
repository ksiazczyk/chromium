// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Offline page model event logger implementation
// summary: Implements recording of offline page model activity, formatting messages when a page is saved with namespace, URL and offline ID or deleted by ID.
// ---

#include "components/offline_pages/core/offline_page_model_event_logger.h"

#include "base/strings/string_number_conversions.h"

namespace offline_pages {

void OfflinePageModelEventLogger::RecordPageSaved(const std::string& name_space,
                                                  const std::string& url,
                                                  int64_t offline_id) {
  std::string id_str = base::NumberToString(offline_id);
  RecordActivity(url + " is saved at " + name_space + " with id " + id_str);
}

void OfflinePageModelEventLogger::RecordPageDeleted(int64_t offline_id) {
  std::string id_str = base::NumberToString(offline_id);
  RecordActivity("Page with ID " + id_str + " has been deleted");
}

}  // namespace offline_pages
