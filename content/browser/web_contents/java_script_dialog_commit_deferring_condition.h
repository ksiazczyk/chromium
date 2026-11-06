// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: JavaScript dialog deferring condition header
// summary: Declares the commit deferring condition class that defers navigation commit while a JavaScript dialog is showing.
// ---

#ifndef CONTENT_BROWSER_WEB_CONTENTS_JAVA_SCRIPT_DIALOG_COMMIT_DEFERRING_CONDITION_H_
#define CONTENT_BROWSER_WEB_CONTENTS_JAVA_SCRIPT_DIALOG_COMMIT_DEFERRING_CONDITION_H_

#include <memory>

#include "content/public/browser/commit_deferring_condition.h"

namespace content {

class NavigationRequest;

// Defers a navigation from committing while a JavaScript dialog is showing.
class JavaScriptDialogCommitDeferringCondition
    : public CommitDeferringCondition {
 public:
  static std::unique_ptr<CommitDeferringCondition> MaybeCreate(
      NavigationRequest& navigation_request);

  JavaScriptDialogCommitDeferringCondition(
      const JavaScriptDialogCommitDeferringCondition&) = delete;
  JavaScriptDialogCommitDeferringCondition& operator=(
      const JavaScriptDialogCommitDeferringCondition&) = delete;

  ~JavaScriptDialogCommitDeferringCondition() override;

  Result WillCommitNavigation(base::OnceClosure resume) override;
  const char* TraceEventName() const override;

 private:
  explicit JavaScriptDialogCommitDeferringCondition(NavigationRequest& request);
};

}  // namespace content

#endif  // CONTENT_BROWSER_WEB_CONTENTS_JAVA_SCRIPT_DIALOG_COMMIT_DEFERRING_CONDITION_H_
