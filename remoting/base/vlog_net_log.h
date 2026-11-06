// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: VlogNetLog header
// summary: Declares CreateVlogNetLogObserver, which registers a NetLog observer redirecting network events to VLOG(4).
// ---

#ifndef REMOTING_BASE_VLOG_NET_LOG_H_
#define REMOTING_BASE_VLOG_NET_LOG_H_

namespace remoting {

// Registers a NetLog observer that redirects all networking events (i.e.
// events logged through net::NetLog) to VLOG(4).
void CreateVlogNetLogObserver();

}  // namespace remoting

#endif  // REMOTING_BASE_VLOG_NET_LOG_H_
