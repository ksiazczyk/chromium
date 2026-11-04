// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GuestOpenerUserData implementation
// summary: Implements WebContents user data that marks a WebContents as a guest opener for contextual tasks.
// ---

#include "chrome/browser/contextual_tasks/guest_opener_user_data.h"

namespace contextual_tasks {

GuestOpenerUserData::GuestOpenerUserData(content::WebContents* contents)
    : content::WebContentsUserData<GuestOpenerUserData>(*contents) {}

GuestOpenerUserData::~GuestOpenerUserData() = default;

// static
bool GuestOpenerUserData::IsGuestOpener(
    const content::WebContents* web_contents) {
  return web_contents && FromWebContents(web_contents) != nullptr;
}

WEB_CONTENTS_USER_DATA_KEY_IMPL(GuestOpenerUserData);

}  // namespace contextual_tasks
