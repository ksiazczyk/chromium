// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AwContentsStatics socket tag declaration
// summary: Declares GetDefaultSocketTag, which retrieves the default traffic stats tag and UID set by the embedder for socket tagging.
// relations:
//   - depends_on /net/socket/socket_tag.h
// ---

#ifndef ANDROID_WEBVIEW_BROWSER_AW_CONTENTS_STATICS_H_
#define ANDROID_WEBVIEW_BROWSER_AW_CONTENTS_STATICS_H_

#include "net/socket/socket_tag.h"

namespace android_webview {

// Retrieves the DefaultTrafficStatsTag value set by the embedder.
net::SocketTag GetDefaultSocketTag();

}  // namespace android_webview

#endif  // ANDROID_WEBVIEW_BROWSER_AW_CONTENTS_STATICS_H_
