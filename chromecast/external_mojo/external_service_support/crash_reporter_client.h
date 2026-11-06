// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Crash reporter client interface
// summary: Declares the CrashReporterClient class with a static Init method used to set up crash reporting in external service processes.
// ---

#ifndef CHROMECAST_EXTERNAL_MOJO_EXTERNAL_SERVICE_SUPPORT_CRASH_REPORTER_CLIENT_H_
#define CHROMECAST_EXTERNAL_MOJO_EXTERNAL_SERVICE_SUPPORT_CRASH_REPORTER_CLIENT_H_

namespace chromecast {
namespace external_service_support {

class CrashReporterClient {
 public:
  static void Init();
};

}  // namespace external_service_support
}  // namespace chromecast

#endif  // CHROMECAST_EXTERNAL_MOJO_EXTERNAL_SERVICE_SUPPORT_CRASH_REPORTER_CLIENT_H_
