// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chrome availability checker header
// summary: Declares a class that reports Chrome availability and can be overridden to return forced values in tests.
// ---

#ifndef CHROME_CREDENTIAL_PROVIDER_GAIACP_CHROME_AVAILABILITY_CHECKER_H_
#define CHROME_CREDENTIAL_PROVIDER_GAIACP_CHROME_AVAILABILITY_CHECKER_H_

namespace credential_provider {

// Checks the availability of Chrome. In unit test this class
// can be overridden to return a forced value if desired.
class ChromeAvailabilityChecker {
 public:
  static ChromeAvailabilityChecker* Get();

  virtual bool HasSupportedChromeVersion();

 protected:
  ChromeAvailabilityChecker();
  virtual ~ChromeAvailabilityChecker();

  // Returns the storage used for the instance pointer.
  static ChromeAvailabilityChecker** GetInstanceStorage();
};

}  // namespace credential_provider

#endif  // CHROME_CREDENTIAL_PROVIDER_GAIACP_CHROME_AVAILABILITY_CHECKER_H_
