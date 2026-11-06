// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CWVSSLStatus internal header
// summary: 'Declares the private initWithInternalStatus: initializer that wraps a web::SSLStatus in a CWVSSLStatus instance.'
// ---

#ifndef IOS_WEB_VIEW_INTERNAL_CWV_SSL_STATUS_INTERNAL_H_
#define IOS_WEB_VIEW_INTERNAL_CWV_SSL_STATUS_INTERNAL_H_

#include "ios/web/public/security/ssl_status.h"
#import "ios/web_view/public/cwv_ssl_status.h"

NS_ASSUME_NONNULL_BEGIN

@interface CWVSSLStatus ()

// Creates CWVSSLStatus which wraps |internalStatus|.
- (instancetype)initWithInternalStatus:(const web::SSLStatus&)internalStatus
    NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END

#endif  // IOS_WEB_VIEW_INTERNAL_CWV_SSL_STATUS_INTERNAL_H_
