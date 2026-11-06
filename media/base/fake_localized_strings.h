// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake localized strings header
// summary: Declares SetUpFakeLocalizedStrings, a helper that installs fake localized strings for tests.
// ---

#ifndef MEDIA_BASE_FAKE_LOCALIZED_STRINGS_H_
#define MEDIA_BASE_FAKE_LOCALIZED_STRINGS_H_

namespace media {

// Call if tests require non-empty resource strings.
void SetUpFakeLocalizedStrings();

}  // namespace media

#endif  // MEDIA_BASE_FAKE_LOCALIZED_STRINGS_H_
