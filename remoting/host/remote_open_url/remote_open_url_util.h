// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Remote open URL utility header
// summary: Declares IsRemoteOpenUrlSupported, which reports whether the remote open URL feature is available on the current platform.
// ---

#ifndef REMOTING_HOST_REMOTE_OPEN_URL_REMOTE_OPEN_URL_UTIL_H_
#define REMOTING_HOST_REMOTE_OPEN_URL_REMOTE_OPEN_URL_UTIL_H_

namespace remoting {

bool IsRemoteOpenUrlSupported();

}  // namespace remoting

#endif  // REMOTING_HOST_REMOTE_OPEN_URL_REMOTE_OPEN_URL_UTIL_H_
