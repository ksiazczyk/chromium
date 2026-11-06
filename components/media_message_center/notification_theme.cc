// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Media color theme implementation
// summary: Implements the default constructors, copy assignment, and destructor of the MediaColorTheme struct.
// ---

#include "components/media_message_center/notification_theme.h"

namespace media_message_center {

MediaColorTheme::MediaColorTheme() = default;

MediaColorTheme::MediaColorTheme(const MediaColorTheme& other) = default;

MediaColorTheme& MediaColorTheme::operator=(const MediaColorTheme&) = default;

MediaColorTheme::~MediaColorTheme() = default;

}  // namespace media_message_center
