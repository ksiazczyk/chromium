// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebViewApkProcess class header
// summary: Declares the WebViewApkProcess singleton class that holds global state and provides access to the pref service in the webview APK process.
// relations:
//   - depends_on /base/sequence_checker.h
//   - depends_on /base/task/single_thread_task_executor.h
//   - depends_on /components/prefs/pref_service.h
// ---

#ifndef ANDROID_WEBVIEW_NONEMBEDDED_WEBVIEW_APK_PROCESS_H_
#define ANDROID_WEBVIEW_NONEMBEDDED_WEBVIEW_APK_PROCESS_H_

#include <memory>

#include "base/sequence_checker.h"
#include "base/task/single_thread_task_executor.h"
#include "components/prefs/pref_service.h"

class PrefRegistrySimple;

namespace android_webview {
// Class that holds global state in the webview apk process.
class WebViewApkProcess {
 public:
  static void Init();
  static WebViewApkProcess* GetInstance();

  PrefService* GetPrefService() const;

 private:
  WebViewApkProcess();
  ~WebViewApkProcess();

  void CreatePrefService();
  void RegisterPrefs(PrefRegistrySimple* pref_registry);

  std::unique_ptr<PrefService> pref_service_;

  std::unique_ptr<base::SingleThreadTaskExecutor> main_task_executor_;
  SEQUENCE_CHECKER(sequence_checker_);
};

}  // namespace android_webview

#endif  // ANDROID_WEBVIEW_NONEMBEDDED_WEBVIEW_APK_PROCESS_H_
