// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: URL scheme utility declarations
// summary: Declares helpers to check whether an NSURL uses a given scheme or has a data scheme.
// ---

#ifndef IOS_NET_URL_SCHEME_UTIL_H_
#define IOS_NET_URL_SCHEME_UTIL_H_

@class NSString;
@class NSURL;

namespace net {

// Returns true if the URL scheme is |scheme|. |scheme| is expected to be
// lowercase.
bool UrlSchemeIs(NSURL* url, NSString* scheme);

// Returns true if the scheme has a data scheme.
bool UrlHasDataScheme(NSURL* url);

}  // namespace net

#endif  // IOS_NET_URL_SCHEME_UTIL_H_
