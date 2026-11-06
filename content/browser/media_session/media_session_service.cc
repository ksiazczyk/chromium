// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Media session service accessor
// summary: Implements GetMediaSessionService, returning the browser-wide MediaSessionServiceImpl singleton on the UI thread.
// ---

#include "content/public/browser/media_session_service.h"

#include "base/no_destructor.h"
#include "content/public/browser/browser_thread.h"
#include "services/media_session/media_session_service_impl.h"

namespace content {

media_session::MediaSessionService& GetMediaSessionService() {
  CHECK_CURRENTLY_ON(BrowserThread::UI, base::NotFatalUntil::M159);
  static base::NoDestructor<media_session::MediaSessionServiceImpl> service;
  return *service;
}

}  // namespace content
