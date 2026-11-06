// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PDF stream delegate StreamInfo definitions
// summary: Defines the default constructors, copy and move assignment operators, and destructor for PdfStreamDelegate::StreamInfo.
// ---

#include "components/pdf/browser/pdf_stream_delegate.h"

namespace pdf {

PdfStreamDelegate::StreamInfo::StreamInfo() = default;
PdfStreamDelegate::StreamInfo::StreamInfo(const StreamInfo&) = default;
PdfStreamDelegate::StreamInfo::StreamInfo(StreamInfo&&) = default;
PdfStreamDelegate::StreamInfo& PdfStreamDelegate::StreamInfo::operator=(
    const StreamInfo&) = default;
PdfStreamDelegate::StreamInfo& PdfStreamDelegate::StreamInfo::operator=(
    StreamInfo&&) = default;
PdfStreamDelegate::StreamInfo::~StreamInfo() = default;

}  // namespace pdf
