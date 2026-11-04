// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: TestSearchResult class declaration
// summary: Declares TestSearchResult, a no-op SearchResult subclass used as a test helper in app list tests.
// relations:
//   - depends_on /ash/app_list/model/search/search_result.h
// ---

#ifndef ASH_APP_LIST_MODEL_SEARCH_TEST_SEARCH_RESULT_H_
#define ASH_APP_LIST_MODEL_SEARCH_TEST_SEARCH_RESULT_H_

#include <memory>
#include <string>

#include "ash/app_list/model/search/search_result.h"

namespace ash {

// A test search result which does nothing.
class TestSearchResult : public SearchResult {
 public:
  TestSearchResult();

  TestSearchResult(const TestSearchResult&) = delete;
  TestSearchResult& operator=(const TestSearchResult&) = delete;

  ~TestSearchResult() override;

  void set_result_id(const std::string& id);
  void SetTitle(const std::u16string& title);
  void SetDetails(const std::u16string& details);
  void SetCategory(const ash::AppListSearchResultCategory category);
  void SetSystemInfoAnswerCardData(
      const ash::SystemInfoAnswerCardData& system_info_data);
  void SetIconAndBadgeIcon();
};

}  // namespace ash

#endif  // ASH_APP_LIST_MODEL_SEARCH_TEST_SEARCH_RESULT_H_
