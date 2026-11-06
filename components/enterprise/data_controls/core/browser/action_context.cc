// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Implementation of ActionSource and ActionDestination emptiness checks
// summary: Implements the empty() checks that determine whether an action source or destination carries any Data Controls context.
// ---

#include "components/enterprise/data_controls/core/browser/action_context.h"

namespace data_controls {

bool ActionSource::empty() const {
  // `ActionSource` should represent either:
  // - A browser tab with the `url`, `incognito` and/or `other_profile` fields.
  //   The `url` field can be empty if the tab has no committed navigation.
  // - The OS clipboard with `os_clipboard` set to true.
  // - The integrated Gemini browser agent (Glic) with `gemini_in_chrome` set
  //   to true.
  // - A clipboard or file transfer action with `content_size` set to a non-negative value.
  return url.is_empty() && !incognito && !other_profile && !os_clipboard &&
         !gemini_in_chrome && !content_size.has_value();
}

bool ActionDestination::empty() const {
  // `ActionDestination` should represent either:
  // - A browser tab with the `url`, `incognito` and/or `other_profile` fields.
  //   The `url` field can be empty if the tab has no committed navigation.
  // - The OS clipboard with `os_clipboard` set to true.
  // - The integrated Gemini browser agent (Glic) with `gemini_in_chrome` set
  //   to true.
  // - A separate application represented by `component` (CrOS-only).
#if BUILDFLAG(IS_CHROMEOS)
  return url.is_empty() && !incognito && !other_profile && !os_clipboard &&
         !gemini_in_chrome && component == Component::kUnknownComponent;
#else
  return url.is_empty() && !incognito && !other_profile && !os_clipboard &&
         !gemini_in_chrome;
#endif  // BUILDFLAG(IS_CHROMEOS)
}

}  // namespace data_controls
