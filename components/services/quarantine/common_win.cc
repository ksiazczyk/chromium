// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Windows Zone.Identifier stream suffix constant
// summary: Defines the Windows Zone.Identifier alternate data stream suffix constant used when annotating downloaded files.
// ---

#include "components/services/quarantine/common_win.h"

namespace quarantine {

// [MS-FSCC] Section 5.6.1
const base::FilePath::CharType kZoneIdentifierStreamSuffix[] =
    FILE_PATH_LITERAL(":Zone.Identifier");

}  // namespace quarantine
