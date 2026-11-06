// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Document attachment info implementation
// summary: Implements the constructor, copy constructor and destructor for the DocumentAttachmentInfo struct.
// ---

#include "pdf/document_attachment_info.h"

namespace chrome_pdf {

DocumentAttachmentInfo::DocumentAttachmentInfo() = default;

DocumentAttachmentInfo::DocumentAttachmentInfo(
    const DocumentAttachmentInfo& other) = default;

DocumentAttachmentInfo::~DocumentAttachmentInfo() = default;

}  // namespace chrome_pdf
