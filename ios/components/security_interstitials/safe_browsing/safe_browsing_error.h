// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Safe Browsing error codes
// summary: Declares the NSError domain and error codes for safe browsing errors such as unsafe resources and enterprise blocks or warnings.
// ---

#ifndef IOS_COMPONENTS_SECURITY_INTERSTITIALS_SAFE_BROWSING_SAFE_BROWSING_ERROR_H_
#define IOS_COMPONENTS_SECURITY_INTERSTITIALS_SAFE_BROWSING_SAFE_BROWSING_ERROR_H_

#import <Foundation/Foundation.h>

// The error domain for safe browsing errors.
extern const NSErrorDomain kSafeBrowsingErrorDomain;

// Error codes for safe browsing errors.
enum class SafeBrowsingErrorCode : NSInteger {
  // Error code for navigations to unsafe resources.
  kUnsafeResource = 1,
  // Error code for navigations to blocked enterprise resources.
  kEnterpriseBlock,
  // Error code for navigations to enterprise resources for which a warning
  // should be displayed.
  kEnterpriseWarn,
};

#endif  // IOS_COMPONENTS_SECURITY_INTERSTITIALS_SAFE_BROWSING_SAFE_BROWSING_ERROR_H_
