// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: About system logs fetcher header
// summary: Declares BuildAboutSystemLogsFetcher, which creates a self-deleting SystemLogsFetcher that aggregates logs for the browser's About system diagnostics page.
// ---

#ifndef CHROME_BROWSER_FEEDBACK_SYSTEM_LOGS_ABOUT_SYSTEM_LOGS_FETCHER_H_
#define CHROME_BROWSER_FEEDBACK_SYSTEM_LOGS_ABOUT_SYSTEM_LOGS_FETCHER_H_

namespace content {
class WebUI;
}  // namespace content

namespace system_logs {

class SystemLogsFetcher;

// Creates a SystemLogsFetcher to aggregate logs for chrome://system.
// The fetcher deletes itself once it finishes fetching data.
SystemLogsFetcher* BuildAboutSystemLogsFetcher(content::WebUI* web_ui);

}  // namespace system_logs

#endif  // CHROME_BROWSER_FEEDBACK_SYSTEM_LOGS_ABOUT_SYSTEM_LOGS_FETCHER_H_

