// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AttachmentInfo implementation
// summary: Implements the default constructor, destructor, and move operations of the AttachmentInfo struct.
// ---

#include "chrome/browser/nearby_sharing/attachment_info.h"

AttachmentInfo::AttachmentInfo() = default;
AttachmentInfo::~AttachmentInfo() = default;

AttachmentInfo::AttachmentInfo(AttachmentInfo&&) = default;
AttachmentInfo& AttachmentInfo::operator=(AttachmentInfo&&) = default;
