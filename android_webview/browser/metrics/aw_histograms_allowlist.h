// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebView histograms allowlist class declaration
// summary: Declares the singleton AwHistogramsAllowlist that checks whether a hashed histogram name is allowed for upload under filtering.
// relations:
//   - depends_on /base/no_destructor.h
// ---

#ifndef ANDROID_WEBVIEW_BROWSER_METRICS_AW_HISTOGRAMS_ALLOWLIST_H_
#define ANDROID_WEBVIEW_BROWSER_METRICS_AW_HISTOGRAMS_ALLOWLIST_H_

#include <stdint.h>

#include <unordered_set>

#include "base/no_destructor.h"

namespace android_webview {

// Keeps a list of which histograms to upload if histograms filtering is
// applied. Replicates the Java HistogramsAllowlist.
class AwHistogramsAllowlist {
 public:
  static AwHistogramsAllowlist* GetInstance();

  AwHistogramsAllowlist(const AwHistogramsAllowlist&) = delete;
  AwHistogramsAllowlist& operator=(const AwHistogramsAllowlist&) = delete;

  bool Contains(uint64_t hash) const;

 private:
  friend class base::NoDestructor<AwHistogramsAllowlist>;

  AwHistogramsAllowlist();
  ~AwHistogramsAllowlist();

  std::unordered_set<uint64_t> allowlist_hashes_;
};

}  // namespace android_webview

#endif  // ANDROID_WEBVIEW_BROWSER_METRICS_AW_HISTOGRAMS_ALLOWLIST_H_
