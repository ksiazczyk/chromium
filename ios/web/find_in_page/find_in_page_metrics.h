// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Find in page metrics header
// summary: Declares functions that record IOS.FindInPage user actions for search started, find next and find previous.
// ---

#ifndef IOS_WEB_FIND_IN_PAGE_FIND_IN_PAGE_METRICS_H_
#define IOS_WEB_FIND_IN_PAGE_FIND_IN_PAGE_METRICS_H_

namespace web {

// Record "IOS.FindInPage.SearchStarted" user action.
void RecordSearchStartedAction();

// Record "IOS.FindInPage.FindNext" user action.
void RecordFindNextAction();

// Record "IOS.FindInPage.FindPrevious" user action.
void RecordFindPreviousAction();

}  // namespace web

#endif  // IOS_WEB_FIND_IN_PAGE_FIND_IN_PAGE_METRICS_H_
