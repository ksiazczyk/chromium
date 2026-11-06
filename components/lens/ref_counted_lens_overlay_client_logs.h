// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Ref-counted Lens overlay client logs wrapper
// summary: Declares a thread-safe ref-counted wrapper that exposes the Lens overlay client logs proto so it can be passed across threads.
// ---

#ifndef CHROME_BROWSER_UI_LENS_REF_COUNTED_LENS_OVERLAY_CLIENT_LOGS_H_
#define CHROME_BROWSER_UI_LENS_REF_COUNTED_LENS_OVERLAY_CLIENT_LOGS_H_

#include "base/memory/ref_counted.h"
#include "third_party/lens_server_proto/lens_overlay_client_logs.pb.h"

namespace lens {

// Wrapper for LensOverlayClientLogs proto to be RefCounted so the proto can be
// passed across threads.
class RefCountedLensOverlayClientLogs
    : public base::RefCountedThreadSafe<RefCountedLensOverlayClientLogs> {
 public:
  RefCountedLensOverlayClientLogs();

  lens::LensOverlayClientLogs& client_logs() { return client_logs_; }

 private:
  friend class base::RefCountedThreadSafe<RefCountedLensOverlayClientLogs>;
  ~RefCountedLensOverlayClientLogs();

  lens::LensOverlayClientLogs client_logs_;
};

}  // namespace lens

#endif  // CHROME_BROWSER_UI_LENS_REF_COUNTED_LENS_OVERLAY_CLIENT_LOGS_H_
