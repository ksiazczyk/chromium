// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AttachmentInfo struct header
// summary: Declares the AttachmentInfo struct that ties a payload ID, text body, or file path to an Attachment.
// ---

#ifndef CHROME_BROWSER_NEARBY_SHARING_ATTACHMENT_INFO_H_
#define CHROME_BROWSER_NEARBY_SHARING_ATTACHMENT_INFO_H_

#include <stdint.h>

#include <optional>
#include <string>

#include "base/files/file.h"

// Ties associated information to an Attachment.
struct AttachmentInfo {
  AttachmentInfo();
  ~AttachmentInfo();

  AttachmentInfo(AttachmentInfo&&);
  AttachmentInfo& operator=(AttachmentInfo&&);

  std::optional<int64_t> payload_id;
  std::string text_body;
  base::FilePath file_path;
};

#endif  // CHROME_BROWSER_NEARBY_SHARING_ATTACHMENT_INFO_H_
