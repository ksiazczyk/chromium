// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ActorTabCloseSkipBeforeUnloadUserData implementation
// summary: Implements the WebContents user data key for the tag that marks a tab close as user-confirmed so beforeunload handling can be skipped.
// ---

#include "chrome/browser/actor/actor_tab_close_skip_beforeunload_user_data.h"

namespace actor {

WEB_CONTENTS_USER_DATA_KEY_IMPL(ActorTabCloseSkipBeforeUnloadUserData);

}  // namespace actor
