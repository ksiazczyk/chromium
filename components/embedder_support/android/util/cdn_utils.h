// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Trusted CDN utilities header
// summary: Declares GetPublisherURL, which returns the publisher URL for a primary main frame navigation hosted by a trusted CDN.
// ---

#ifndef COMPONENTS_EMBEDDER_SUPPORT_ANDROID_UTIL_CDN_UTILS_H_
#define COMPONENTS_EMBEDDER_SUPPORT_ANDROID_UTIL_CDN_UTILS_H_

class GURL;

namespace content {
class RenderFrameHost;
}

namespace embedder_support {

// Gets the publisher url from |rfh|'s last committed navigation if:
// * |rfh| is the primary main frame
// * |rfh|'s committed navigation's url belongs to a trusted CDN
// * A publisher url is present
// Otherwise, this returns an empty GURL.
GURL GetPublisherURL(content::RenderFrameHost* rfh);

}  // namespace embedder_support

#endif  // COMPONENTS_EMBEDDER_SUPPORT_ANDROID_UTIL_CDN_UTILS_H_
